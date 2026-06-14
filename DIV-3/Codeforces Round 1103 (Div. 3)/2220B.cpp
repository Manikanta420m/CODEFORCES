#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long n,m,c,p=-1,k=0,x=0;
cin>>n>>m;
for(long long i=0;i<n;++i){
cin>>c;
if(c==p)
k++;
else
{
    k=1;
    p=c;
}
if(k>x)
x=k;
}
if(x>=m)
cout<<"NO\n";
else 
cout<<"YES\n";
}
}