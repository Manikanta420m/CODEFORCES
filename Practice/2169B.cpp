/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

void MANI(){ 
    string s;cin>>s;
    ll n=s.size(),c1=0,c2=0;;
    for(ll i=0;i<n-1;i++){
        if(s[i]!='<' and s[i+1]!='>'){
            cout<<-1;
            return;
        }
        if(s[i]=='<')c1++;
        else if(s[i]=='>')c2++;
    }
    if(s[n-1]=='<')c1++;
    else if(s[n-1]=='>')c2++;
    cout<<n-min(c1,c2);
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