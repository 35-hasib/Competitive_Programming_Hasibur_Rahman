
//https://codeforces.com/gym/104637/problem/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	int a,b,d;cin>>a>>b>>d;
	int mn = min(a,b);
	int mx = max(a,b);
	int f = mx/mn;
	if(mx%mn){
		f++;
	}
	f--;
	if(f<=d){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		sol();
	}
	return 0;
}
