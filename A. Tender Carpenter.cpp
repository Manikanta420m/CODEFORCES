#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ll           long long
#define PI           3.1415926535897932384626
#define rep(i,n)     for(int i=0;i<n;i++)
#define repk(i,k,n)  for(int i=k;i<n;i++)
#define pb           push_back
//#define vec          vector<int>
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
 ll n,k,sum=0,ans=0;cin>>n;
 bool f=false;
 vector<ll>vec(n),b(n),res(n);
 for(auto &i:vec)cin>>i,sum+=i;
 //sort(a.begin(),a.end());
// reverse(a.begin(),a.end());
 //string s;cin>>s;
//  for(ll i=0;i<n;i++){
//     if(i>0){
//         ll mini=min(a[i],a[i-1]);
//         ll maxi=max(a[i],a[i-1]);
//         if(mini*2<maxi){
//             cout<<"YES";
//             return;
//         }
//     }
//  }
//  cout<<"NO";
  bool c=true;
 
	    for(int i=0;i<n;i++)
	    {
	        if(i-1>=0 && vec[i-1]>=vec[i])
	        {
	            if(2*vec[i]>vec[i-1])
	            {
	                c=false;
	                break;
	            }
	        }
	        else if(i-1>=0 && vec[i-1]<vec[i])
	        {
	            if(2*vec[i-1]>vec[i])
	            {
	                c=false;
	                break;
	            }
	        }
 
	        if(i+1<=n-1 && vec[i+1]>=vec[i])
	        {
	            if(2*vec[i]>vec[i+1])
	            {
	                c=false;
	                break;
	            }
	        }
	        else if(i+1<=n-1 && vec[i+1]<vec[i])
	        {
	            if(2*vec[i+1]>vec[i])
	            {
	                c=false;
	                break;
	            }
	        }
	    }
	    if(c==false)
	        cout<<"YES";
	    else
	        cout<<"NO";
}
int main(){
     w(x){
        solve();
        cout<<endl;
     }
}