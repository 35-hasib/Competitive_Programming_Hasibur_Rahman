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
#define in(a) int a; cin >> a;
#define ins(s) string s; cin>> s;
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
void solve();
main(){
SpeedUpIO
    in(t)
    while(t--){

        solve();
    }
    return 0;
}
void solve(){
    in(a) in(b) in(r)
    int ans = 0;
    int two = 0;
    int mn = abs(a-b);
    for(int i=1; i<=r;){
        ans = abs((a^(i-1)) - (b^(i-1)));
        mn = min(mn, ans);
        i = i*2;
    }
    out(mn)


}
                         /*আলহামদুলিল্লাহ*/