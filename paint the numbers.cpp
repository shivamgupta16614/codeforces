#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];}
    sort(a,a+n);
    int cnt=0;
    int i=0;
    int x;
    int t=0;
    while(cnt!=n){
            x=a[i];
            if(x!=0){t++;
        for(int j=i;j<n;j++){
            if(a[j]!=0){
                if(a[j]%x==0){cnt++;a[j]=0;}
            }
        }}
        i++;
    }
    cout<<t;
}

