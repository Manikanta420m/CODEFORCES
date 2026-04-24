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
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>a(n),pre(n),v;
    for(auto &i:a)cin>>i;
    pre[0]=a[0];
    for(ll i=1;i<n;i++)pre[i]=a[i]^pre[i-1];
    if(pre[n-1]==0){
        cout<<"YES";
        return;
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n-1;j++){
            if(pre[i]==(pre[j]^pre[i]) and pre[i]==(pre[n-1]^pre[j])){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
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