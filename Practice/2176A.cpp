/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>a(n),b(n),v;
    for(auto &i:a)cin>>i;
    priority_queue<ll>q;
    for(ll i=n-1;i>=0;i--){
        bool f=false;
        for(ll j=i-1;j>=0;j--){
            if(a[j]!=-1 and a[j]>a[i])f=true;
        }
        if(f)ans++;
    }cout<<ans;
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