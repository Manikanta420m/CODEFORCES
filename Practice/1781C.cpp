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
    ll n;cin>>n;
    string s;
    cin>>s;
    vector<pair<int,char>>freq(26);
    for(int i=0;i<26;i++)freq[i].second='a'+i;
    for(int i=0;i<n;i++)freq[s[i]-'a'].first++;
    sort(freq.rbegin(),freq.rend());
    ll best_k=1,changes=n;
    for(ll k=1;k<=26;k++){
        if(n%k)continue;
        ll unchanged=0;
        for(ll i=0;i<k;i++)unchanged+=min((ll)freq[i].first,n/k);
        if(n-unchanged<changes){
            best_k=k;
            changes=n-unchanged;
        }
    }
    map<char,int>mp;
    for(ll i=0;i<best_k;i++)mp[freq[i].second]=n/best_k;
    string ans(n,' ');
    for(ll i=0;i<n;i++){
        if(mp[s[i]]){
            ans[i]=s[i];
            mp[s[i]]--;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]!=' ')continue;
        while(!mp.empty() and (*mp.begin()).second==0)mp.erase(mp.begin());
        auto ch=(*mp.begin()).first;
        ans[i]=ch;
        mp[ch]--;
    }
    cout<<changes<<endl;
    cout<<ans;
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