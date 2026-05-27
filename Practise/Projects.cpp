/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

ll n;

ll solve(ll idx,ll maxi,vector<pair<ll,pair<ll,ll>>>&a){
    if(idx==n){
        return 0;
    }
    ll pick=0,skip=0;
    if(maxi<a[idx].first)pick=a[idx].second.second+solve(idx+1,a[idx].second.first,a);
    skip=solve(idx+1,maxi,a);
    return max(skip,pick);
}

struct Project{
   ll st,en,pro;
};

void MANI(){ 
    cin>>n;
    vector<Project>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i].st>>a[i].en>>a[i].pro;
    }
    sort(a.begin(),a.end(),[&](const Project &a,const Project &b){return a.en<b.en;});
    vector<ll>dp(n),ends;
    for(auto i:a)ends.push_back(i.en);
    for(ll i=0;i<n;i++){
        ll take=a[i].pro;
        ll j=upper_bound(ends.begin(),ends.end(),a[i].st-1)-ends.begin()-1;
        if(j>=0)take+=dp[j];
        ll skip=(i>0?dp[i-1]:0);
        dp[i]=max(take,skip);
    }
    cout<<dp[n-1];
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

//-----------------Helpers------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;