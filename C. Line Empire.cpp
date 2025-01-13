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
 ll n,m,k,sum=0,sum1=0,sum2=0,x,y;cin>>n>>x>>y;
 vector<ll>a(n),b(n),ans(n);
 for(auto &i:a)cin>>i,sum1+=i;
 b[0]=a[0];
 for(ll i=1;i<n;i++)b[i]=b[i-1]+a[i];
 //ans[0]=a[0]*x+y*(a[0]);
 ///ll res=ans[0]+(b[n-1]-b[]);
 ll res=y*b[n-1];
 ll prev=y*a[0];
for(ll i=0;i<n;i++){
  res=min(res,prev+(x*(a[i]))+(b[n-1]-b[i]-((n-i-1)*a[i]))*y);
  if(1+i!=n) prev+=(a[i+1]-a[i])*y;
}cout<<res;
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}