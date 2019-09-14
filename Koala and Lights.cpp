#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a,b;
    map <int,int> m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(s.at(i)=='0'){
                int x=b;
            while(x<=10000){
                for(int j=0;j<a;j++){
                    m[x]++;
                    x++;
                }
                x=x+a;
            }
        }
       else  {
                int x=0;
                for(int j=0;j<b;j++){
                    m[x]++;
                    x++;
                }
                x=x+a;

            while(x<=10000){

                for(int j=0;j<a;j++){
                    m[x]++;
                    x++;
                }
                x=x+a;
            }}


    }

     map<int, int>::iterator itr;
     int m1=0;
     for(itr=m.begin();itr!=m.end();itr++){
    m1=max(m1,itr->second);
     }
     cout<<m1;}
