/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

void MANI(){ 
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(m);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,-1));
    for(ll i=0;i<=n;i++)dp[i][0]=0;
    for(ll j=0;j<=m;j++)dp[0][j]=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
               dp[i][j]=1+dp[i-1][j-1];
            }
            else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    ll len=dp[n][m];
    vector<ll>ans(len);
    ll idx=len-1;
    ll i=n,j=m;
    while(i>0 and j>0){
        if(a[i-1]==b[j-1]){
            ans[idx]=a[i-1];
            i--;
            j--;
            idx--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    cout<<len<<endl;
    for(auto i:ans)cout<<i<<" ";
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }

//-----------------Helpers------------------------///

// in case of map TLE use---> gp_hash_table<ll,ll> mp;
