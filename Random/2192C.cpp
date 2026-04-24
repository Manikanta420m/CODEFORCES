/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

void MANI(){ 
    ll n,m,k,ans=0,sum=0,h;cin>>n>>h>>k;
    vector<ll>a(n),b(n),v;
    for(auto &i:a)cin>>i;
    ll sm=accumulate(a.begin(),a.end(),0LL);
    ll req=(h+sm-1)/sm;
    ans+=(req-1)*k;
    ans+=(req-1)*n;
    h-=sm*(req-1);
    if(h==0){
        cout<<ans;
        return;
    }
    ll mini=INT_MAX;
    ll csm=0,reqi=0;
    bool f=true;
    vector<ll>maxi(n,0);
    maxi[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--)maxi[i]=max(a[i],maxi[i+1]);
    for(ll i=0;i<n;i++){
        mini=min(mini,a[i]);
        ll maxim=maxi[i];
        if(csm+maxim>=h){reqi=i+1;break;}
        csm+=a[i];
        if(i<n-1 and csm+(maxi[i+1]-mini)>=h){reqi=i+1;break;}
        if(csm>=h){reqi=i+1;break;}
    }
    cout<<ans+reqi;
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    cin>>tt;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }

//-----------------Helpers------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;