/*    /\_/\.  */ #include <bits/stdc++.h>
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
#define all(v)       (v.begin),b.end();
#define sortall(v)   sort(all(v));

const int MOD=1e9+7;
const int N = 1e5;
const int INF = int(1e9) + 99;
const int MAXI = 20001;
const int MAXN = 1e5 + 4;
const int MOD1 = 998244353;
const int mod=998244353;

//-----------------------Mod Operations---------------------///

 ll add(ll a, ll b, ll m = MOD) {
    return ((a % m) + (b % m) + m) % m;
};
ll sub(ll a, ll b, ll m = MOD) {
    return ((a % m) - (b % m) + m) % m;
};
ll mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
};
ll modExp(ll a, ll e, ll m = MOD) {
    a % m;
    ll r = 1;
    while (e) {
        if (e & 1) {
            r = mul(r, a, m);
        }
        a = mul(a, a, m);
        e >>= 1;
    }
 
    return r;
}
ll inv(ll a, ll m = MOD) {
    return modExp(a, m - 2, m);
};

//--------------------Funkctions-----------------------------///

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
bool is_palindrome(int a) {
  string g = to_string(a);
  string cg = g;
  reverse(g.begin(), g.end());
  return g == cg;
}
bool comp(pair<ll,ll>&p1,pair<ll,ll>&p2){
  return p1.second<p2.second;
}

vector<int> sieve(int max_num) {
  vector<bool> is_prime(max_num + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= max_num; ++i) {
      if (is_prime[i]) {
          for (int j = i * i; j <= max_num; j += i) {
              is_prime[j] = false;
          }
      }
  }
  vector<int> primes;
  for (int i = 2; i <= max_num; ++i) {
      if (is_prime[i]) {
          primes.push_back(i);
      }
  }
  // return is_prime;
  return primes;
}

struct range{
  ll l,r,idx;
  bool operator<(const range &other) const{
    if(l==other.l)return r>other.r;
    return l<other.l;
  }
};

int get_first(ll n){ return 63-__builtin_clzll(n); }

int tot_bits(ll n) { return __builtin_popcountll(n);}

//-------------------LUUVE-----------------------------/// 

ll sz,ans=0;
string s;
vector<ll>adj[4000+5];
vector<ll>vis(2e5+5,0);

ll dfs(ll u,ll par){
  ll cur=0;
  if(s[u]=='W')cur++;
  else cur--;
  for(auto i:adj[u]){
    if(i!=par)cur+=dfs(i,u);
  }
  if(cur==0)ans++;
  return cur;
}

void MANI(){ 
    ll n,m,k,sum=0;cin>>n;
    for(ll i=0;i<=n;i++)adj[i].clear();
    ans=0;
    for(ll i=2;i<=n;i++){
        ll x;cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    cin>>s;
    s=" "+s;
    dfs(1,1);
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

//-----------------Helpers------------------------///

// in case of map TLE use---> gp_hash_table<ll,ll> mp;
