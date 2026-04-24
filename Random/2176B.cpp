/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    string s;cin>>s;
    ll c=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0')c++;
        else c=0;
        ans=max(ans,c);
    }c=0;
    ll i=0,j=n-1;
    while(s[i]=='0'){c++;i++;}
    while(s[j]=='0'){c++;j--;}
    cout<<max(c,ans);
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    cin>>tt;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }

//-----------------Helpers------------------------///

// in case of map TLE use---> gp_hash_table<ll,ll> mp;
/*

j



*/