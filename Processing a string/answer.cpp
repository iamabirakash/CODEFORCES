#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum = 0;
        for(char ch : s){
            if(isdigit(ch)){
                sum += ch-'0';
            }
        }
        cout<<sum<<endl;
    }
}
