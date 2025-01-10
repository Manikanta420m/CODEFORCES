#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
ll tt;cin>>tt;
while(tt--){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=1,r=k;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll res=0;
        for(ll i=0;i<n-1;i++){
            res+=min(mid,a[i+1]-a[i]);
        }res+=mid;
        if(res>=k)r=mid-1;
        else l=mid+1;
    }cout<<l<<endl;
}
}
