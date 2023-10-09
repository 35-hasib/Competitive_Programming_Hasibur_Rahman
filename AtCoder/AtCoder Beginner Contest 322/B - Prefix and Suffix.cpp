#include<bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	int n,m;cin>>n>>m;
	string a,b;cin>>a>>b;
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			c=1;
		}
	}
	if(c==0){
		for(int i=m-n,j=0;i<m;i++,j++){
		if(a[j]!=b[i]){
			cout<<1<<endl;
			return;
		}
	}
	}
	if(c==1){
		for(int i=m-n,j=0;i<m;i++,j++){
			// cerr<<i<<endl;
		if(a[j]!=b[i]){
			cout<<3<<endl;
			return;
		}
	}
	}
	if(c==1){
		cout<<2<<endl;
		return;
	}
	if(c==0){
		for(int i=m-n,j=0;i<m;i++,j++){
		if(a[j]!=b[i]){
			c=1;
		}
	}
	}
	if(c==0){
		cout<<0<<endl;
		return;
	}
	

}

int main(){
	// int t;cin>>t;
	// while(t--){
		sol();
	// }
	return 0;
}
