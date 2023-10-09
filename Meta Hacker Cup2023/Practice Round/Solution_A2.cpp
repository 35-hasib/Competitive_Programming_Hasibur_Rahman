//Update :21-Sep-23//
                         /*বিসমিল্লাহির রাহমানির রাহিম*/
#include<bits/stdc++.h>
#define ci cin            /*:          :*/     //********
#define co cout           /*:          :*/     //**********
#define it int            /*:          :*/     //*       ***
#define ll long long      /*::::::::::::*/     //*      **
#define retur return      /*::::::::::::*/     //*******
#define reak break        /*:          :*/     //*******
#define cotiue continue   /*:          :*/     //*     ***
#define strig string      /*:          :*/     //*       ***
                          /**********************************/
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
#define el "\n"
#define endl el
#define int ll
#define vi vector<int> 
#define vpii vector< pair <int,int> > 
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define lla(x) (x).rbegin(),(x).rend()
#define lel cout<<endl
#define yes cout<<"YES"<<el
#define no cout<<"NO"<<el
#define FOR(i,a,b) for(int i=a;i<(int)b;i++)
#define rFOR(i,a,b) for(int i =a;i>=(int)b;i--)
#define For0(i,n) FOR(i,0,n)
#define For(n) FOR(i,0,n)
#define rFor(n) rFOR(i,n,0)
#define in(a) int a; cin >> a;
#define out(x) cout<<x<<el;
#define sz(x) x.size()
#define MAX INT_MAX
#define dbg(x) {cerr << #x << " " << x << "\n";}
#define input(x) {for(auto& i: x) cin>>i;}
#define print(x) {for(auto i: x) cout<<i<< " "; cout << "\n";}
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first == b.first) return a.second > b.second;
    return a.first>b.first;
}
void solve(int t);
signed main(){
SpeedUpIO
    in(t)
    // while(t--){
    for(int i=1;i<=t;i++){
        solve(i);
    }
    return 0;
}
void solve(int t){
    in(a) in(b) in(c)
    if(c<a && c<b){
        cout<<"Case #"<<t<<": "<<0<<el;
        return;
    }
    int x = c/a;
    int y = c/b*2-1;
    int z = 1 + (c-a)/b*2;

    cout<<"Case #"<<t<<": "<<max({x,y,z})<<el;
    
}
                         /*আলহামদুলিল্লাহ*/
