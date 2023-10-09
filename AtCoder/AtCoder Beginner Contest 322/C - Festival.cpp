#include<bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	int n,m;cin>>n>>m;
	vector<int> a;
	for(int i=0;i<m;i++){
		int j;cin>>j;
		a.push_back(j);
	}
	for(int i=1,j=0;i<=n;i++){
		if(a[j]==i){
			cout<<0<<endl;
			j++;
		}
		else{
			cout<<a[j]-i<<endl;
		}
		
	}
	

}

int main(){
	// int t;cin>>t;
	// while(t--){
		sol();
	// }
	return 0;
}
