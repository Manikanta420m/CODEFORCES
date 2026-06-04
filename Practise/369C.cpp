/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long
#define pb           push_back
#define ff first
#define ss second
//-------------------DFS-----------------------------/// 

ll dfs(ll st,vector<vector<pair<ll,ll>>>& adj,vector<ll>&ans,ll par,ll to_use){
    ll has_lowr=0;
    for(auto i:adj[st]){
        if(i.ff!=par){
            if(i.ss==2){
                 has_lowr+=dfs(i.ff,adj,ans,st,1);
            }
            else{
                has_lowr+=dfs(i.ff,adj,ans,st,0);
            }
        }
    }
    if(to_use==1){
         if(has_lowr > 0){
                  return 1;
        }else{
                  ans.pb(st);
                  return 1;
        }
    }
    else return has_lowr;
}

//-------------------LUUVE-----------------------------/// 
void MANI(){ 
    ll n,m,k,sum=0;cin>>n;
    vector<vector<pair<ll,ll>>> adj(n);
    for(ll i=0;i<n-1;i++){
        ll a, b, c;
            cin >> a >> b >> c;
            adj[a-1].pb({b-1, c});
            adj[b-1].pb({a-1, c});
    }
    vector<ll>ans;
    dfs(0,adj,ans,-1,0);
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i+1<<" ";
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