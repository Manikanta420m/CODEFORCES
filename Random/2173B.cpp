/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long
#define INF (ll)1e18

ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};

void MANI(){ 
    ll n;cin>>n;
    ll neg=0,pos=0;
    vector<ll>a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    for(ll i=0;i<n;i++){
       ll a1=pos-a[i];
       ll b1=b[i]-neg;
       ll a2=neg-a[i];
       ll b2=b[i]-pos;
       neg=min(min(a1,b1),min(a2,b2));
       pos=max(max(a1,b1),max(a2,b2));
    }
    cout<<pos;
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;cin>>tt;
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