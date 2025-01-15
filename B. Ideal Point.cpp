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
 ll n,m,k,sum=0,sum1=0,sum2=0;cin>>n>>k;
//  vector<ll>a(n),b(n),res(n);
//  for(auto &i:a)cin>>i,sum1+=i;
unordered_map<ll,ll>mp;
vector<pair<ll,ll>>pr(n);
 for(ll i=0;i<n;i++){
    cin>>pr[i].first>>pr[i].second;
    for(ll j=pr[i].first;j<=pr[i].second;j++){
        mp[j]++;
    }
 }
 for(ll i=1;i<=50;i++){
    if(i!=k && mp[i]>=mp[k]){
        ll ans=0;
        for(auto it:pr){
            if((it.first<=i && it.second>=i) && !(it.first<=k && it.second>=k)){
                ans++;
            }
        }
        if(mp[i]-ans>=mp[k]){
            cout<<"NO";
            return;
        }
    }
 }
 cout<<"YES";
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}