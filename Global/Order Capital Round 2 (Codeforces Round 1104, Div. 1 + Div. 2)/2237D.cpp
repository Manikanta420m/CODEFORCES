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
const int INF = int(1e9) + 99;
const int MAXI = 20001;
const int MAXN = 1e5 + 4;
const int M1 = 998244353;

//-----------------------MOD OPERATIONS---------------------///

ll add(ll a, ll b, ll m = M) { return ((a % m) + (b % m) + m) % m; };
ll sub(ll a, ll b, ll m = M) { return ((a % m) - (b % m) + m) % m; };
ll mul(ll a, ll b, ll m = M) { return ((a % m) * (b % m)) % m; };

ll modExp(ll a, ll e, ll m = M) {
    a % M;
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
ll inv(ll a, ll m = M) { return modExp(a, m - 2, m); };

//--------------------HELPERS-----------------------------///

bool prime(int x){ for(int i=2;i*i<=x;i++){if(x%i==0){return 0;}} return 1; }
ll gcd(int a,int b){ if(b==0) return a; return gcd(b,a%b); }

ll lcm(ll a[],ll n){ ll r=a[0]; for(ll i=1;i<n;i++){ r=((a[i]*r)/gcd(a[i],r)); } return r; }

ll mypow(ll a,ll b){ ll res=1LL; while(b){ if(b&1) res=res*a%M; a=a*a%M; b>>=1;} return res; }

ll fact(ll m){ if(m==0 or m==1){return 1;} else{return m*fact(m-1);} }

ll set_bits(ll h){ ll c=0; while(h){c+=(h&1);h>>=1;} return c; }

bool is_palindrome(int a) { string g = to_string(a); string cg = g; reverse(g.begin(), g.end()); return g == cg; }

bool comp(pair<ll,ll>&p1,pair<ll,ll>&p2){ return p1.second<p2.second; }

//------------------SIEVE------------------------//
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
  for (int i = 2; i <= max_num; ++i) { if (is_prime[i]) primes.push_back(i); }
  return primes;
}

struct range{
  ll l,r,idx;
  bool operator<(const range &other) const{
    if(l==other.l)return r>other.r;
    return l<other.l;
  }
};

//------------------BITS------------------------//
int get_first(ll n){ return 63-__builtin_clzll(n); }
int tot_bits(ll n) { return __builtin_popcountll(n); }

//------------------FENWIK Tree------------------------//

const ll MAXF = 1e6+10;
ll BIT[MAXF];

void update(ll i,ll x){
   for(;i<=MAXF;i+=(i&(-i))){
      BIT[i]+=x;
   }
}

ll query(ll i){
   ll sm=0;
   for(;i>0;i-=(i&(-i))){
    sm+=BIT[i];
   }return sm;
}

//-------------------SEGEMENT TREE-----------------------------/// 
vector<long long> a(100005);
vector<long long> seg(400005);

void build(long long idx, long long l, long long r) {
    if (l == r) {
        seg[idx] = a[l];
        return;
    }
    long long mid = (l + r) / 2;
    build(idx * 2 + 1, l, mid);
    build(idx * 2 + 2, mid + 1, r);
    seg[idx] = seg[idx * 2 + 1] + seg[idx * 2 + 2];
}

long long query(long long idx, long long low, long long high, long long key) {
    if (low == high) {
        return low;
    }
    long long mid = (low + high) / 2;
    if (key <= seg[2 * idx + 1]) {
        return query(2 * idx + 1, low, mid, key);
    } else {
        return query(2 * idx + 2, mid + 1, high, key - seg[2 * idx + 1]);
    }
}

void pointUpdate(long long idx, long long l, long long r, long long node) {
    if (l == r) {
        seg[idx] ^= 1;
        return;
    }
    long long mid = (l + r) / 2;
    if (node <= mid) pointUpdate(2 * idx + 1, l, mid, node);
    else pointUpdate(2 * idx + 2, mid + 1, r, node);

    seg[idx] = seg[idx * 2 + 1] + seg[idx * 2 + 2];
}
//-------------------DFS-----------------------------/// 

ll n,m,sz;
vector<vector<ll>>adj(2e5+5,vector<ll>());
vector<ll>vis(2e5+5,0);

void dfs(ll u){
  if(vis[u])return;
  sz++;
  vis[u]=1;
  for(auto i:adj[u]){
    dfs(i);
  }
}

//-------------------LUUVE-----------------------------/// 
void MANI(){ 
    ll n,m,k,ans=0,sum=0,pre=0;cin>>n;
    string s;cin>>s;
    vector<ll>a={1,0,0};
    for(auto i:s){
        pre+=(i=='0'?1:-1);
        int x=(pre%3+3)%3;
        a[x]++;
    }
    ans=1LL*n*(n+1)/2;
    ll res=0;
    for(ll i=0;i<3;i++){
        res+=a[i]*(a[i]-1)/2;
    }
    ans-=res;
    ll los=0,l=1;
    for(ll i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(l>=3)los+=1LL*(l-1)*(l-1)/4LL;
            l=1;
        }
        else{
            l++;
        }
    }if(l>=3)los+=1LL*(l-1)*(l-1)/4LL;
    cout<<ans-los;
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