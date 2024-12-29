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
//#define show(a)      for(aut)

const int N = 1e5;
const int INF = int(1e9) + 99;
const int MAXI = 20001;
const int MAXN = 1e5 + 4;
const int MOD1 = 998244353;
/*******************************cons****************************/

#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

ll fact(ll n){
   if(n==0||n==1)return 1;
    return (n*fact(n-1))%MOD1;
}
void solve(){ 
//  ll n,k,ans=0;cin>>n;
//  //bool f=false;
//  //vector<ll>a(n),b(n),res(n);
//  //for(auto &i:a)cin>>i,sum+=i;
//  //sort(a.begin(),a.end());
//  string s;cin>>s;
//  //vector<ll>ans;
//  ll c=0,f=1,res=1;
//  for(ll i=0;i<n-1;i++){
//     if(s[i]==s[i+1])c++;
//     else{
//         ans+=c;
//         c++;
//         res=(res%MOD1*c%MOD1)%MOD1;
//         c=0;
//     }
//  }
//  if(c!=0){
//       ans+=c;
//         c++;
//         res=(res%MOD1*c%MOD1)%MOD1;
//  }
//  for(ll i=1;i<=ans;i++){
//     f=((f%MOD1)*(i%MOD1))%MOD1;
//  }
//  res=((res%MOD1)*(f%MOD1))%MOD1;
//  cout<<ans<<" "<<res;
class prepare_factorials {
private:
    ll N , MOD ;
    vector<ll> fact ;
public:
    prepare_factorials(ll n , ll mod = (ll)1e9 + 7LL) {
        N = n + 5 ;
        MOD = mod ;
        fact.resize(N) ;
        prepare() ;
    }
 
    void prepare() {
        fact[0] = fact[1] = 1 ;
        for( ll i = 2 ; i < N ; i++ ) {
            fact[i] = (fact[i - 1] * i) % MOD ;
        }
    }
 
    ll getFact(ll X) {
        return fact[X] ;
    }
};
prepare_factorials fac(200008 , MOD) ;
void solution(){
    string s ;
    cin >> s ;
    ll n = s.length() ;
    ll cnt = 0 , op = 0 , ans = 1LL ;
    for(ll i = 0 ; i < n ; i++) {
        ll j = i ; 
        while(j < n && s[j] == s[i])
            ++j ;
        ll count = j - i ;
        op += max(count - 1 , 0LL) ;
        ans = (ans * (count)) % MOD ;
        i = j - 1 ;
    }
    ans = (ans * fac.getFact(op)) % MOD ;
    cout << op << ' ' << ans << '\n' ;
}
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}