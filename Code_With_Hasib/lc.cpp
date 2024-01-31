#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string>& t) {
    stack<string> ss;
    int a = 0, b = 0;
    string ans;
    for(int i=0; i<t.size(); i++){
        cerr<<t[i]<<endl;
        if(t[i] == "+"){
            a = stoi(ss.top());
            ss.pop();
            b = stoi(ss.top());
            ss.pop();
            ans = to_string(b+a);
            ss.push(ans);
        }
        else if(t[i] == "-"){
            a = stoi(ss.top());
            ss.pop();
            b = stoi(ss.top());
            ss.pop();
            ans = to_string(b-a);
            ss.push(ans);
        }
        else if(t[i] == "*"){
            a = stoi(ss.top());
            ss.pop();
            b = stoi(ss.top());
            ss.pop();
            ans = to_string(b*a);
            ss.push(ans);
        }
        else if(t[i] == "/"){
            a = stoi(ss.top());
            ss.pop();
            b = stoi(ss.top());
            ss.pop();
            ans = to_string(b/a);
            ss.push(ans);
        }
        else ss.push(t[i]);
    }
    return stoi(ss.top());
}
main(){
    vector<string> s;
    int n; cin>>n;

    for(int i=0; i<n; i++){
        string j; cin>>j;
        s.push_back(j);
    }
    cout<<evalRPN(s)<<endl;
}