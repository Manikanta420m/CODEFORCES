/*    /\_/\  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll           long long

//-------------------LUUVE-----------------------------/// 

ll p[20];

void MANI(){ 
    ll a,n;
    cin>>a>>n;
    vector<ll> d(n+1);
    for(int i=1;i<=n;i++) cin>>d[i];
    ll f=0,id=-1;
    ll mn=2e18;
    for(int i=0;i<=17;i++){
        ll ff=f*10LL+d[2];
        f=ff;
        id=i;
        mn=min(mn,abs(a-f));
        if(f>a) break;
    }
 
    for(int i=id;i>=0;i--){
        ll c=d[2]-d[1];
        c=c*p[i];
        ll ff=f-c;
        if(ff<a) mn=min(mn,abs(a-ff));
        else f=ff;
        mn=min(mn,abs(a-f));
    }
    cout<<mn;
}

//------------------Main-----------------------------///
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
    cin>>tt;
    p[0]=1;
    for(int i=1;i<=18;i++) p[i]=p[i-1]*10LL;
    while(tt--){
        MANI();
        cout<<endl;
     } 
  }
//-----------------TIPS------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;