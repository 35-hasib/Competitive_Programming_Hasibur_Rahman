#include<bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	int n;cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<n-1;i++){
		if(s[i-1]=='A' && s[i]=='B' && s[i+1]=='C'){
			cout<<i<<endl;
			return;
		}
	}
	cout<<-1<<endl;
	return;
}

int main(){
	// int t;cin>>t;
	// while(t--){
		sol();
	// }
	return 0;
}
