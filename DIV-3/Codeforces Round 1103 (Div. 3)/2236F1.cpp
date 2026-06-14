/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long
#define PI           3.1415926535897932384626
#define rep(i,n)     for(ll i=0;i<n;i++)
#define repk(i,k,n)  for(ll i=k;i<n;i++)
#define pb           push_back
#define vec          vector<ll>
#define u_map        unordered_map<ll,ll>
#define vecp         vector<pair<ll,ll>>
#define ff           first 
#define ss           second
#define yes          cout << "YES" << endl;
#define cout_ans     cout<<ans<<endl;
#define no           cout << "NO" << endl;
#define all(v)       v.begin(), v.end()
#define sortall(v)   sort(all(v));

const int M=1e9+7;

ll MAXY=500005;
ll preC[500005];
vector<ll>a(MAXY);

void solve(){
    for(ll i=2;i<MAXY;i++){
        preC[i]=i;
    }
    for(ll i=2;i*i<MAXY;i++){
        if(preC[i]==i){
            for(ll j=i*i;j<MAXY;j+=i){
                if(preC[j]==j){
                    preC[j]=i;
                }
            }
        }
    }
}
//-------------------LUUVE-----------------------------/// 
void MANI(){ 
    ll n,k,ans=1,sum=0;cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        while(x>1){
            ll p=preC[x];
            ll cnt=0;
            while(x%p==0){
                x/=p;
                cnt++;  
            }
            if(a[p]==0)v.pb(p);
            a[p]+=cnt;
        }
    }
    for(auto i:v){
        ans=(ans*((1+a[i])%M))%M;
        a[i]=0;
    }
    cout<<ans;
}

//------------------Main-----------------------------///
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    cin>>tt;
    solve();
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }
//-----------------TIPS------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;