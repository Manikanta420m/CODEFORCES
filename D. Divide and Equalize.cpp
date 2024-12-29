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

void primefact(ll n,unordered_map<ll,ll>&mp){
    while(n%2==0){
        mp[2]++;
        n/=2;
    }
    for(ll i=3;i<=sqrt(n);i++){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
    }
    if(n>1)mp[n]++;
}

void solve(){ 
 ll n,k,sum=0,ans=0;cin>>n;
 bool f=false;
 vector<ll>a(n),b(n),res(n);
 for(auto &i:a)cin>>i,sum+=i;
 //sort(a.begin(),a.end());
 //string s;cin>>s;
 unordered_map<ll,ll>mp;
 for(ll i=0;i<n;i++){
    primefact(a[i],mp);
 }
 for(auto i:mp){
    if(i.second%n!=0){
        cout<<"NO";
        return;
    }
 }cout<<"YES";
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}