/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n;cin>>n;
    vector<ll>a(n);
    unordered_set<ll>st;
    for(auto &i:a){cin>>i;st.insert(i);}
    ll res=st.size();
    ll ans=0;
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++){
      if(a[i]>=res){
        cout<<a[i];
        return;
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
        cout<<endl;
     } 
  }

//-----------------Helpers------------------------///

// in case of map TLE use---> gp_hash_table<ll,ll> mp;
/*

j



*/