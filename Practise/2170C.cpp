/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long
#define INF (ll)1e18

ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};

void MANI(){ 
    ll n,k,ans=0;cin>>n>>k;
    vector<ll>a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll j=0,i=0;
    while(i<n and j<n){
        ll r=b[j],q=a[i];
        if(k>=((r+1)*q)+r){
            i++;j++;
            ans++;
        }
        else j++;
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