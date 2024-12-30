// #include <bits/stdc++.h>
// using namespace std;
// using namespace chrono;

// #define ll           long long
// #define PI           3.1415926535897932384626
// #define rep(i,n)     for(int i=0;i<n;i++)
// #define repk(i,k,n)  for(int i=k;i<n;i++)
// #define pb           push_back
// #define vec          vector<int>
// #define u_map        unordered_map<int,int>
// #define vecp         vector<pair<int,int>>
// #define ff           first 
// #define ss           second
// #define yes          cout << "YES" << endl;
// #define cout_ans     cout<<ans<<endl;
// #define no           cout << "NO" << endl;
// #define all(v)       (v.begin),b.end();
// #define sortall(v)   sort(all(v));
// //#define show(a)      for(aut)

// const int N = 1e5;
// const int INF = int(1e9) + 99;
// const int MAXI = 20001;
// const int MAXN = 1e5 + 4;
// const int MOD1 = 998244353;
 
// /*******************************cons****************************/

// #define w(x)  \
//     int x;    \
//     cin >> x; \
//     while (x--)

// void solve(){ 
//  ll n,k,mid,mid_cr,sum=0,ans=0;cin>>n;
//  bool f=false;
//  ll l=1,h=2e9;
//  while(l<h){
//      mid=(l+h)/2;
//      mid_cr=(mid*(mid-1))/2;
//     if(mid_cr<=n)l=mid;
//     else h=mid;
//  }
//  ll l_cr=(l*(l-1))/2;
//  ll bal=n-l_cr;
//  cout<<l+bal;
// }
// int main(){
//      w(x){
//         solve();
//         cout<<endl;
//      }
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
      ll n,k,mid,mid_cr,sum=0,ans=0;cin>>n;
     bool f=false;
     ll l=1,h=2e9;
    while(h-l>1){
     mid=l+(h-l)/2;
     mid_cr=(mid*(mid-1))/2;
    if(mid_cr<=n)l=mid;
    else h=mid;
   }
   ll l_cr=(l*(l-1))/2;
    ll bal=n-l_cr;
   cout<<l+bal<<endl;
    }
}