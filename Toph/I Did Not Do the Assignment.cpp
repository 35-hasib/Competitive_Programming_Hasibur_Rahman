#include <iostream>

using namespace std;

int sroot(int x){                       // sroot
    if (x == 0 || x == 1) {
        return x;
    }
    int left = 1;
    int right = x;
    while (right - left >1) {
        int mid = (right+left) / 2;

        if (mid <= x / mid) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return left;
}

bool isPrime(int n){
    for(int i=2;i<=sroot(n);i++){
        if(!(n%i)){
            return 0;
        }
    }
    return 1;
}


int main() {
	int n;cin>>n;
    if(isPrime(n)){
        cout<<"NO PUNISHMENT"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
	return 0;
}
