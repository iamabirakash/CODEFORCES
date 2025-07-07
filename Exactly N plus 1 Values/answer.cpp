#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int i,n,x;
	    cin>>n;
	    cout<<1<<" ";
	    x=1;
	    for(i=0;i<n;i++){
	        cout<<x<<" ";
	        x*=2;
	    }
	    cout<<endl;
	}
}
