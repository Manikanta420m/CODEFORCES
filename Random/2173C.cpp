/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long
#define INF (ll)1e18

ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};

void MANI(){ 
    ll n,k;cin>>n>>k;
    vector<ll>a(n),b(n),ans;
    unordered_map<ll,ll>mp;
    for(auto &i:a){cin>>i;mp[i]++;}
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++){
        ll ele=a[i];
        if(mp[ele]==-1)continue;
        for(ll j=ele;j<=k;j+=ele){
            if(mp.find(j)!=mp.end()){
               mp[j]=-1;
            }
            else {cout<<-1;return;}
        }
        ans.push_back(ele);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
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