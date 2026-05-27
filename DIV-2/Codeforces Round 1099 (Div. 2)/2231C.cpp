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
void MANI(){ 
    ll n,m,k,ans=INT_MAX,sum=0;cin>>n;
    unordered_set<ll>st;
    vector<ll>a(n),b(n),tempo;
    for(auto &i:a){cin>>i;st.insert(i);}
    if(st.size()==1){
        cout<<0;
        return;
    }
    ll maxi=0;
    vector<vector<ll>>v;
    ll mini=n;
    for(auto i:a){
        ll ele=i;
        vector<ll>temp;
        if(ele==1)temp.push_back(2);
        temp.push_back(ele);
        while(ele!=1){
            if(ele&1)ele+=1;
            else ele/=2;
            temp.push_back(ele);
        }
        sort(temp.begin(),temp.end());
        if(temp.size()>maxi)tempo=temp;
        mini=min(mini,(ll)temp.size());
        v.push_back(temp);
    }
    // for(auto i:v){
    //     for(auto j:i)cout<<j<<" ";
    //     cout<<endl;
    // }
  
    // ll req=-1;
    // for(ll j=mini-1;j>=0;j--){
    //     ll same=v[0][j];
    //     bool f=true;
    //     for(ll i=0;i<n;i++){
    //         if(v[i][j]!=same){
    //             f=false;
    //             break;
    //         }
    //     }
    //     if(f){
    //         req=same;
    //         break;
    //     }
    // }
//   //  cout<<"ANS= "<<req<<" ";
//   for(auto i:tempo)cout<<i<<" ";
//   cout<<endl;
  
  for(auto x:tempo){
    ll reco=x;
    ll ansi=0;
    bool f=true;
    for(auto i:a){
        ll ele=i;
        while(ele!=reco){
            if(ele&1)ele+=1;
            else ele/=2;
            if(ele<reco-1){
                f=false;
                break;
            }
            ansi++;
        }
    }
   if(f) ans=min(ans,ansi);
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
//-----------------TIPS------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;