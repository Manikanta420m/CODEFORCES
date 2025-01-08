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
 ll n,m,k,sum=0,ans=0;cin>>n>>m>>k;
 bool f=false;
 vector<ll>a(n),b(m),res(n);
 for(auto &i:a)cin>>i;
 for(auto &i:b)cin>>i;
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());
 ll l=0,r=0;
 while(r<m && l<n){
    if(a[l]+k>=b[r] && a[l]-k<=b[r]){
        ans++;
        l++;
        r++;
    }
    else if(a[l]-k>b[r])  r++;
    else if(a[l]+k<b[r])  l++;
 }cout<<ans;
}
int main(){
   //  w(x){
        solve();
        cout<<endl;
   // }
}