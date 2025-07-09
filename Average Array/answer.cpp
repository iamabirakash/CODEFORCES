#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    vector<int> a;
	    if(n%2!=0){
	        a.push_back(s);
	        for(int i=1;i<=n/2;i++){
	            a.push_back(s-i);
	            a.push_back(s+i);
	        }
	    } else {
	        for(int i=1;i<=n/2;i++){
	            a.push_back(s-i);
	            a.push_back(s+i);
	        }
	    }
	    for(int val : a){
	        cout<<val<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
