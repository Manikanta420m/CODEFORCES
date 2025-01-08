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
 string str;cin>>str;
 ll r1,r2,r3;cin>>r1>>r2>>r3;
 ll p1,p2,p3;cin>>p1>>p2>>p3;
 ll rub;cin>>rub;
 ll b=0,s=0,c=0;
 for(ll i=0;i<str.size();i++){
    if(str[i]=='B')b++;
    else if(str[i]=='S')s++;
    else c++;
 }
 ll l=0,r=rub+300;
 while(l<=r){
    ll mid=l+(r-l)/2;
    ll z=0;
    ll x1=max(z,mid*b-r1);
    ll x2=max(z,mid*s-r2);
    ll x3=max(z,mid*c-r3);
    ll cost=x1*p1+x2*p2+x3*p3;
    if(cost>rub)r=mid-1;
    else l=mid+1;
 }cout<<r;
}
int main(){
    // w(x){
        solve();
        cout<<endl;
   // }
}