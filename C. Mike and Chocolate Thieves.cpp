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

ll f(ll n){ll ans=0;
    for(ll i=2;i*i*i<=n;i++){
        ans+=(n/(i*i*i));
    }return ans;
}

void solve(){ 
 ll n,k,sum=0;cin>>n;
 ll l=0,r=1e18;
 ll ans=-1;
 while(l<=r){
    ll mid=l+(r-l)/2;
    ll res=f(mid);
    if(res==n)ans=mid;
    if(res>=n)r=mid-1;
    else l=mid+1;
 }cout<<ans;
}
int main(){
 //    w(x){
        solve();
        cout<<endl;
  //   }
}