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
 ll n,h,m,k,sum=0,sum1=0,sum2=0;cin>>n>>h>>m;
 ll fmin=1440,maxi=1440,mini=h*60+m;
 ll mine=mini;
 bool f=true;
 for(ll i=0;i<n;i++){
    ll h1,m1;
    cin>>h1>>m1;
    ll res=h1*60+m1;
    if(res>=mini && res<maxi){
         maxi=min(res,maxi);
         f=false;
    }
    mine=min(res,mine);
 }
 if(f){
    ll req=1440-mini+mine;
    cout<<req/60<<" "<<req%60;
    return ;
 }
 cout<<(maxi-mini)/60<<" "<<(maxi-mini)%60;
}

int main(){
     w(x){
        solve();
        cout<<endl;}  }