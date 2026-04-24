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

ll n,m,sz;
ll tar;
ll M=1e9+7;
ll solve(ll idx,ll sm,vector<ll>&a,vector<vector<ll>>&dp){
    if(idx>=n){
        return sm==tar;
    }
    ll pick=0,skip=0;
    if(sm+a[idx]<=tar)pick=solve(idx+1,sm+a[idx],a,dp)%M;
    skip=solve(idx+1,sm,a,dp)%M;
    return dp[idx][sm]=(pick%M+skip%M)%M;
}

void MANI(){ 
    cin>>n;
    vector<ll>a;
    for(ll i=1;i<=n;i++)a.push_back(i);
    tar=n*(n+1)/2;
    if(tar&1){
        cout<<0;
        return;
    }
    tar/=2;
     vector<ll>dp(tar+1,0);
     dp[0]=1;
     for(ll i=1;i<=n;i++){
        for(ll j=tar;j>=i;j--){
           dp[j]=(dp[j]+dp[j-i])%M;
        }
     }
     ll inv=(M+1)/2;
    cout<<(dp[tar]*inv)%M;
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
  //  cin>>tt;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }

//-----------------Helpers------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;