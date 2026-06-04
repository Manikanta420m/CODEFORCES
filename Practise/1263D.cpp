/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

ll n,m,sz;
vector<vector<ll>>adj(2e5+100,vector<ll>());
vector<ll>vis(2e5+100,0);

void dfs(ll u){
  if(vis[u])return;
  sz++;
  vis[u]=1;
  for(auto i:adj[u]){
    if(!vis[i]) dfs(i);
  }
}

//-------------------LUUVE-----------------------------/// 
void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>dp(n+1,0);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        ll maxi=0;
       for(ll j=2;j*j<=x;j++){
          if(x%j==0) maxi=max(maxi,max(dp[j],dp[x/j]));
       }
       for(ll j=2;j*j<=x;j++){
          dp[j]=max(dp[j],maxi+1);
          dp[x/j]=max(dp[x/j],maxi);
       }
    }
    for(auto i:dp)ans=max(ans,i);
    cout<<ans;
}

//------------------Main-----------------------------///
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
   // cin>>tt;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }
//-----------------TIPS------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;