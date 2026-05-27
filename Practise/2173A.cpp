/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long
#define INF (ll)1e18

ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};

void MANI(){ 
    ll n,k,ans=0,x=0;cin>>n>>k;
    string s;cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='1')x=k;
        else if(x)x--;
        else ans++;
    }
    cout<<ans;
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