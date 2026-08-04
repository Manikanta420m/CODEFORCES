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
    string str;ll j,k;
    cin>>str>>j>>k;
    ll n=str.size();
        n=str.size();
        int a[5],b[5];
        for(int i=1;i<=n;++i) a[i]=b[i]=i;
        for(int i=1;i<j;++i) next_permutation(a+1,a+n+1);
        for(int i=1;i<k;++i) next_permutation(b+1,b+n+1);
        int cnt=0;
        for(int i=1;i<=n;++i)if(a[i]==b[i])
            ++cnt;
        cout<<cnt<<"A"<<n-cnt<<"B";

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