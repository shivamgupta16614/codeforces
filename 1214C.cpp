#include <iostream>
#include <map>
#include <vector>
#include <stack>
using namespace std;
int main(){
int n;
cin>>n;
if(n%2!=0){cout<<"No";return 0;}
vector <char > v;
map <char,int> m;
char x;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    m[x]++;
}

if(m['(']!=m[')']){
    cout<<"No";return 0;
}
stack <char> s;
s.push('(');
int cnt =0;
int dp=1;
for(int i=0;i<n-1;i++){
    if(v[i]=='('){dp++;}
   else  if(v[i]==')'){dp--;}
   if(dp<0){cnt++;}

}
if(cnt==0){cout<<"Yes";}
else cout<<"No";
return 0;}
