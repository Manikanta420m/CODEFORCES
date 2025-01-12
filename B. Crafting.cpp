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
 ll n,k=0,sum=0,sum1=0,sum2=0,res=0;cin>>n;
 vector<ll>a(n),b(n);
 for(ll i=0;i<n;i++)cin>>a[i],sum1+=a[i];
 for(ll i=0;i<n;i++)cin>>b[i],sum2+=b[i];
 bool f=false;
 for(ll i=0;i<n;i++){
    if(a[i]<b[i]){
        k++;
    }
    if(k==2){
       cout<<"NO";
       return;
    }
 }
 if(k==0){
    cout<<"YES";
    return ;
 }
 for(ll i=0;i<n;i++){
    if(a[i]<b[i]){
        a[i]+=2*(abs(b[i]-a[i]));
        res=b[i]-a[i];
        break;
    }
 } 
 for(ll i=0;i<n;i++){
    if(a[i]-res<b[i]){
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