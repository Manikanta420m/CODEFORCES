#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ll           long long
#define PI           3.1415926535897932384626
#define rep(i,n)     for(int i=0;i<n;i++)
#define repk(i,k,n)  for(int i=k;i<n;i++)
#define pb           push_back
#define vec          vector<int>
#define u_map        unordered_map<int,int>
#define vecp         vector<pair<int,int>>
#define ff           first 
#define ss           second
#define yes          cout << "YES" << endl;
#define cout_ans     cout<<ans<<endl;
#define no           cout << "NO" << endl;
#define all(v)       (v.begin),b.end();
#define sortall(v)   sort(all(v));


const int N = 1e5;
const int INF = int(1e9) + 99;
const int MAXI = 20001;
const int MAXN = 1e5 + 4;
const int MOD1 = 998244353;
const ll mod=998244353; 

/*******************************cons****************************/
bool prime(int x){
    for(int i=2;i*i<=x;i++){if(x%i==0){return 0;}}
    return 1;
}
ll gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a[],ll n){
    ll r=a[0];
    for(ll i=1;i<n;i++){r=((a[i]*r)/gcd(a[i],r));}
    return r;
}
ll mypow(ll a,ll b){
    ll res=1LL;while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;b>>=1;
    }return res;
}
ll fact(ll m){
    if(m==0 or m==1){return 1;}
    else{return m*fact(m-1);}
}
ll set_bits(ll h)
{
    ll c=0;
    while(h){c+=(h&1);h>>=1;}
    return c;
}

#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

void solve(){ 
 ll n,m;cin>>n>>m;
 vector<vector<ll>>a(n,vector<ll>(m));
 for(auto &i:a){
    for(auto &j:i){
        cin>>j;
    }
 }
 //sort(a.begin(),a.end());
 for(auto &i:a){
    sort(i.begin(),i.end());
 }
 for(ll i=0;i<n;i++){
    for(ll j=0;j<m-1;j++){
        if(a[i][j+1]-a[i][j]!=n ){
            cout<<-1;
            return;
        }
    }
 }
 map<ll,ll>mp;
 for(ll i=0;i<n;i++){
    mp[a[i][0]]=i+1;
 }
// sort(mp.begin(),mp.end());
    for(auto i:mp){
        cout<<i.ss<<" ";
    }
}

int main(){
     w(x){
        solve();
        cout<<endl;}  }