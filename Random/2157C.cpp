/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n,k,q;cin>>n>>k>>q;
    vector<ll>ans(n,-1);
    vector<pair<ll,ll>>q1,q2;
    while(q--){
       ll c,l,r;cin>>c>>l>>r;
       l--,r--;
       if(c==2){
        q2.push_back({l,r});
       }
       else{
        q1.push_back({l,r});
       }
    }
    for(ll i=0;i<q1.size();i++){
        ll l=q1[i].first,r=q1[i].second;
        for(ll j=l;j<=r;j++)ans[j]=k;
    }
    sort(q2.begin(),q2.end());
    for(ll i=0;i<q2.size();i++){
        ll l=q2[i].first,r=q2[i].second;
        unordered_set<ll>st;
        for(ll j=0;j<k;j++)st.insert(j);
        for(ll j=l;j<=r;j++){
            if(ans[j]==k){
              ans[j]+=1;
            }
            if(ans[j]!=-1){
                auto it=st.find(ans[j]);
                if(it!=st.end())st.erase(it);
            }
        }
        for(ll j=l;j<=r and !st.empty();j++){
            if(ans[j]==-1){
               auto it=st.begin();
               ans[j]=*it;
               st.erase(it);
            }
        }
    }
    for(auto &i:ans)if(i==-1)i=0;
    for(auto i:ans)cout<<i<<" ";
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