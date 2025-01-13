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
 ll n,m,k,sum=0,sum1=0,sum2=0;cin>>n;
 vector<ll>a(n),b(n),res(n);
 for(auto &i:a)cin>>i,sum1+=i;
 //for(auto &i:b)cin>>i,sum2+=i;
 sort(a.begin(),a.end());
// string s,s1,s2;cin>>s;
unordered_map<ll,ll>mp;
for(ll i=0;i<n;i++)mp[a[i]]++;
ll mid=n/2;
// if((a[mid]==a[mid-1] || a[mid]==a[mid+1]) && (mp[a[mid]]>n/2)){
//     cout<<"NO";
//     return ;
// }
ll l=0,r=n/2;
//cout<<"YES"<<endl;
ll i=0;
while(l<mid){
    //cout<<a[l++]<<" "<<a[r++]<<" ";
    b[i++]=a[l++];
    b[i++]=a[r++];
}
if(n&1)b[i]=a[r];
for(ll i=1;i<n-1;i++){
  if((b[i]>b[i+1] && b[i]>b[i-1]) || (b[i]<b[i+1] && b[i]<b[i-1])){
    continue;
  }
  else{
    cout<<"NO";
    return;
  }
}
cout<<"YES\n";
for(auto &i:b)cout<<i<<" ";
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}