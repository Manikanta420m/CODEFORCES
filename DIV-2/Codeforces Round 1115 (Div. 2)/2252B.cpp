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
void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    string s;cin>>s;
    ll z=count(s.begin(),s.end(),'0');
    ll o=count(s.begin(),s.end(),'1');
    if(abs(z-o)>2){
        cout<<-1;
        return;
    }
    ll d=z-o;
    ll l0=0;
    char tar='0';
    for(auto i:s){
        if(i==tar){
           l0++;
           tar=(tar=='0')?'1':'0';
        }
    }
    ll l1=0;
    tar='1';
    for(auto i:s){
        if(i==tar){
           l1++;
           tar=(tar=='0')?'1':'0';
        }
    }
    ll t00=(l0%2==1)?l0:l0-1;
    ll t01=(l0%2==0)?l0:l0-1;
    ll t11=(l1%2==1)?l1:l1-1;
    ll t10=(l1%2==0)?l1:l1-1;
    if(d==2){
        ans=t00;
    }
    else if(d==1){
       ans=max({t00,t01,t10});
    }
    else if(d==0){
        ans=max({t00,t01,t10,t11});
    }
    else if(d==-1){
        ans=max({t01,t10,t11});
    }
    else if(d==-2){
        ans=t11;
    }
    cout<<n-ans;
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
//-----------------TIPS------------------------///
// in case of map TLE use---> gp_hash_table<ll,ll> mp;