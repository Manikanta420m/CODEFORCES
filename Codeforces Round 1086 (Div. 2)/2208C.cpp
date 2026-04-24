/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

void MANI(){ 
    cout<<fixed<<setprecision(10);
    ll n;cin>>n;
    vector<ll>c(n),p(n);
    for(ll i=0;i<n;i++)cin>>c[i]>>p[i];
    vector<double>dp(n+1,0.0);
    for(ll i=n-1;i>=0;i--){
        double skip=dp[i+1];
        double pick=c[i]+(1.0-p[i]/100.0)*dp[i+1];
        dp[i]=max(pick,skip);
    }
    cout<<dp[0];
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