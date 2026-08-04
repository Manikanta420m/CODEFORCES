#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve(){
   int n;
   cin>>n;
   vector<int> a(n+1),cnt(n+1,0);
   for(int i=1;i<=n;i++){
       cin>>a[i];
       if(abs(a[i])==2) cnt[i]=1;
       cnt[i]+=cnt[i-1];
   }
   pair<int,int> res={n,0};
   int mx2=0,c2=0,lastneg=0,lastzero=0,neg=0;
   for(int i=1;i<=n;i++){
       if(a[i]==0){
           lastzero=i;
           c2=neg=0;
           continue;
       }
       if(abs(a[i])==2) c2++;
       if(a[i]<0){
           neg++;
           if(neg==1){
               lastneg=i;
               continue;
           }
       }
        if(neg&1){
            
           int c=cnt[i]-cnt[lastneg];
           if(c>=mx2){
                mx2=c;
                res={lastneg,n-i};
           }
       }
        else if(neg%2==0){
            if(c2>=mx2){
              mx2=c2;
              res={lastzero,n-i};
           }
       }
   }
   cout<<res.first<<" "<<res.second<<"\n";
   
}
int32_t main(){
    int tc=1;
    cin >> tc;
    while(tc--){
       solve();
    }
}