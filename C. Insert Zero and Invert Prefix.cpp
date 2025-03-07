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

// CHILL BROTHER.... 

void MANI(){ 
 ll n,m,k,sum=0,sum1=0,cur=1,sum2=0;cin>>n;
 vector<ll>a(n),b(n),v,res(n),ans;
 for(auto &i:a)cin>>i,sum1+=i;
 if(a[n-1]==1){
    cout<<"NO";
    return;
 }
 reverse(a.begin(),a.end());
 for(ll i=1;i<n;i++){
    if(a[i]!=a[i-1]){
        v.push_back(cur);
        cur=1;
    }else cur++;
 }cout<<"YES"<<endl;
 v.push_back(cur);
 for(ll i=0;i<v.size();i+=2){
     if(i+1<v.size()){
        for(ll j=0;j<v[i]-1;j++)cout<<0<<" ";
        for(ll j=0;j<v[i+1];j++)cout<<0<<" ";
        cout<<v[i+1]<<" ";
     }
     else{
        for(ll j=0;j<v[i];j++)cout<<0<<" ";
     }
 }
}

int main(){
     w(x){
        MANI();
        cout<<endl;}  }