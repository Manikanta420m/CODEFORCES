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
 ll n,k,a,b,sum=0,ans=0;cin>>n>>a>>b;
 bool f=false;
 vector<ll>arr(n),res(n);
 for(auto &i:arr)cin>>i,sum+=i;
 //sort(a.begin(),a.end());
 //string s;cin>>s;
 map<ll,map<ll,ll>>mp;
 for(ll i=0;i<n;i++){
   ans+=mp[(a-arr[i]%a)%a][arr[i]%b];
   mp[arr[i]%a][arr[i]%b]++;
 }cout<<ans;
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}