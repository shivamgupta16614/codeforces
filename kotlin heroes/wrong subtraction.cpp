#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin>>n;

unsigned long long a[n+1],sum;
sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}

if(sum%2!=0){cout<<"NO";return 0;}


map <long long ,int> f,s;

for(int i=1;i<n;i++){
 s[a[i]]++;
}
f[a[0]]=1;
long long sum1=0;
for(int i=0;i<n;i++){
    sum1+=a[i];
    if(sum1==sum/2){cout<<"YES";return 0;}
    else if(sum1>sum/2){
        long long x=sum1-sum/2;
        if(f.find(x)!=f.end()){cout<<"YES"; return 0;}
    }
    else {
        long long x=sum/2-sum1;
        if(s.find(x)!=s.end()){cout<<"YES"; return 0;}
    }
    f[a[i+1]]++;
    s[a[i+1]]--;
}
cout<<"NO";return 0;}
