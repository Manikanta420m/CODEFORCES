/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;

#define ll           long long

void MANI(){ 
    ll n,m,k,ans=0,sum=0;cin>>n;
    vector<ll>a(n),eve,odd;
    for(auto &i:a)cin>>i;
    for(auto i:a){
        if(i&1)odd.push_back(i);
        else eve.push_back(i);
    }
    sort(odd.begin(),odd.end());
    sort(eve.rbegin(),eve.rend());
    if(odd.empty()){
        for(ll i=0;i<n;i++)cout<<0<<" ";
        return;
    }
    if(eve.empty()){
        for(ll i=0;i<n;i++)cout<<(i&1?0:odd.back())<<" ";
        return;
    }
    ll cur=odd.back();
    cout<<cur<<" ";
    ll esum=0;
    for(ll i=0;i<eve.size();i++){
        esum+=eve[i];
        cout<<cur+esum<<" ";
    }
    for(ll i=1;i<odd.size();i+=2){
        if(i+1<odd.size()){
            cout<<esum+cur-eve.back()<<" "<<esum+cur<<" ";
        }
        else cout<<0<<" ";
    }
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