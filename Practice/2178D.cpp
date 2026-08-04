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
    ll n,m,k,ans=0,sum=0;cin>>n>>k;
    vector<ll>a(n),b,v;
    for(auto &i:a)cin>>i;
    vector<pair<ll,ll>>pr;
    for(ll i=0;i<n;i++)pr.push_back({a[i],i+1});
    sort(pr.begin(),pr.end());
    for(ll i=0;i<n;i++){
      b.push_back(pr[i].second);
    }
    if(k>n/2){
      cout<<-1;
      cout<<endl;
      return;
    }
    if(k!=0){
      cout<<n-k<<endl;
      for(ll i=0;i<n;i++){
        if(n-i>2*k){
          cout<<b[i]<<" "<<b[i+1]<<endl;
        }
        else{
          cout<<b[i+1]<<" "<<b[i]<<endl;
          i++;
        }
      }
    }
    else{
      ll sm=accumulate(a.begin(),a.end(),0LL)-a[b[n-1]-1];
      if(a[b[n-1]-1]>sm){
        cout<<-1<<endl;
        return;
      }
      sm=0;
      ll x=n-1;
      while(sm<a[b[n-1]-1]){
        x--;
        sm+=a[b[x]-1];
      }
      cout<<n-1<<endl;
      for(ll i=0;i<x;i++){
        cout<<b[i]<<" "<<b[i+1]<<endl;
      }
      for(ll i=x;i<n-1;i++){
        cout<<b[i]<<" "<<b[n-1]<<endl;
      }
    }
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    cin>>tt;
    while(tt--){
        MANI();
        //cout<<endl;
     } 
  }

//-----------------Helpers------------------------///

// in case of map TLE use---> gp_hash_table<ll,ll> mp;













//