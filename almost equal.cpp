#include <bits/stdc++.h>
using namespace std;
int main() {

  int n;
  cin >> n;

  if (n % 2 == 1) {
        int  a[2*n];
  for (int i = 0; i < n; i++) {
    a[i]= 2*i +1;
    a[i+n]=2*i + 2;
    if (i%2==1) {
      swap(a[i],a[i + n]);
    }
  }
    cout << "YES" << endl;
    for(int i=0;i<2*n;i++) {
      cout <<a[i]  << " ";
    }
    cout << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
