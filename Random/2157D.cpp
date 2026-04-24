/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n,l,r,ans=0;
    cin>>n>>l>>r;
   // l--,r--;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    vector<ll>pre(n),suf(n);
    pre[0]=a[0];
    suf[n-1]=a[n-1];
    for(ll i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
    for(ll i=n-2;i>=0;i++)suf[i]=suf[i+1]+a[i];
    for(ll i=0;i<n;i++){
        {
            ll l=i,r=n-i-1;
            ll sm=0,ext=l-r;
            if(i)sm-=pre[i-1];
            if(i<n-1)sm+=suf[i+1];
            ans=max(ans,min(sm+ext*l,sm+ext*r));
        }
        {
            ll l=i+1,r=n-i-1;
            ll sm=0,ext=l-r;
            sm-=pre[i];
            if(i<n-1)sm+=suf[i+1];
            ans=max(ans,min(sm+ext*l,sm+ext*r));
        }
    }
    cout<<ans;
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
/*

j



*/