/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long
//-------------------LUUVE-----------------------------/// 

ll ans=0,n,k;
vector<ll>a(1e5+1);
vector<vector<ll>>adj(1e5+1);

void solve(ll from,ll to,ll x){
   a[to]==1?x++:x=0;
   if(x>k)return;
   ll deg=adj[to].size();
   if(deg==1){
    ans++;
    return;
   }
   for(ll i=0;i<deg;i++){
     if(adj[to][i]==from)continue;
     solve(to,adj[to][i],x);
   }
   return;
}

void MANI(){ 
    cin>>n>>k;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n-1;i++){
        ll x,y;cin>>x>>y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll x=a[0];
    for(auto i:adj[0]){
        solve(0,i,x);
    }
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