/*    /\_/\.  */ #include <bits/stdc++.h>
/*   (= ._.)  */using namespace std;
/*   / >  \>  */using namespace chrono;
#define ll           long long
#define INF (ll)1e18

ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};

void MANI(){ 
    ll n,m;cin>>n>>m;
    vector<string>a;
    for(ll i=0;i<n;i++){
        string s;cin>>s;
        a.push_back(s);
    }
    ll dp[n][m][4][4];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            for(ll dir=0;dir<4;dir++){
                for(ll l=0;l<4;l++){
                    dp[i][j][dir][l]=INF;
                }
            }
        }
    }
    queue<array<ll,4>>q;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(a[i][j]=='S'){
                q.push({i,j,0,0});
                dp[i][j][0][0]=0;
            }
        }
    }
    ll ans=INF;
    while(!q.empty()){
        auto [x,y,dir,l]=q.front();
        q.pop();
        if(a[x][y]=='T'){
            ans=min(ans,dp[x][y][dir][l]);
        }
        for(ll i=0;i<4;i++){
            ll nl=(l*(dir==i)+1);
            if(nl>=4)continue;
            ll nx=x+dx[i];
            ll ny=y+dy[i];
            if(nx>=0 and ny>=0 and nx<n and ny<m and a[nx][ny]!='#' and dp[nx][ny][i][nl]==INF){
                dp[nx][ny][i][nl]=dp[x][y][dir][l]+1;
                q.push({nx,ny,i,nl});
            }
        }
    }
    cout<<(ans==INF?-1:ans);
}

//------------------Main-----------------------------///

int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt=1;
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