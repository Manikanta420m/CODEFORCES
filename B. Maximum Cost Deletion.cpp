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

void solve(){ 
 ll n,k,sum=0,a,b;cin>>n>>a>>b;
 bool f=false;
 //vector<ll>arr(n),b(n),res(n);
 //for(auto &i:a)cin>>i,sum+=i;
 //sort(a.begin(),a.end());
 //vector<ll>arr;
 string s;cin>>s;ll ans=a*n;
 if(b>0) ans+=b*n;
 else{
    ll c=0;
    for(ll i=1;i<n;i++){
        if(s[i]!=s[i-1])c++;
    }c++;
    ans+=((c/2)+1)*b;
 }
 cout<<ans;
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}