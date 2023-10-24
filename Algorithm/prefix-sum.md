```cpp
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
void solve();
signed main(){
SpeedUpIO
    //in(t)
    //while(t--){

        solve();
    //}
    return 0;
}

const int N = 1e5+5;
int hsh[N];

void solve(){                                   //Rg-sum  
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        hsh[i] = a[i]+hsh[i-1];
    }
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        cout<<hsh[r] - hsh[l-1]<<endl;
    }
    
}
                         /*আলহামদুলিল্লাহ*/
i
x
a[x]
t--
l  r

i
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

out
8
19
28
21
```
