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
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>a(n),b(n),v;
   // for(auto &i:a)cin>>i;
   string s;cin>>s;
    ll ans1=0,ans2=0;
    for(ll c=0;c<=1;c++){
        bool f=true;
        for(ll j=0;j*2<n;j++){
            ll idx=2*j;
            ll exp=(c+j)%2;
            if(s[idx]!='?' and (s[idx]-'0')!=exp){
                f=false;
                break;
            }
        }
        if(f)ans1++;
    }
    for(ll c=0;c<=1;c++){
        bool f=true;
        for(ll j=0;j*2+1<n;j++){
            ll idx=(2*j)+1;
            ll exp=(c+j)%2;
            if(s[idx]!='?' and (s[idx]-'0')!=exp){
                f=false;
                break;
            }
        }
        if(f)ans2++;
    }
    cout<<(1LL*ans1*ans2);
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