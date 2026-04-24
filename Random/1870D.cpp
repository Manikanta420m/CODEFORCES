/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long

void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>a(n),b(n,0),v;
    for(auto &i:a)cin>>i;
    cin>>k;
    ll mini=LLONG_MAX,idx=0LL;
    for(ll i=0;i<n;i++){
      if(a[i]<=mini){
        mini=a[i];
        idx=i;
      }
    }
    if(k<mini){
      for(auto i:b)cout<<i<<" ";
      return;
    }
    ll x=k/mini;
    for(ll i=0;i<=idx;i++){
       b[i]=x;
    }
    ll ext=mini+(k%mini);
    ll idx2=idx;
    for(ll i=idx+1;i<n;i++){
       if(a[i]<=ext){
        idx2=i;
      }
    }
    for(ll i=idx+1;i<=idx2;i++)b[i]=1;
    for(auto i:b)cout<<i<<" ";
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