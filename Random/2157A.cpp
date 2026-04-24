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
    ll n,ans=0;cin>>n;
    vector<ll>a(n);
    unordered_map<ll,ll>mp;
    for(auto &i:a){cin>>i;mp[i]++;}
    for(ll i=0;i<=100;i++){
       if(mp[i]>=i){
        ans+=mp[i]-i;
       }
       else ans+=mp[i];
    }
    cout<<ans;
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
/*

j



*/