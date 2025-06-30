#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    string a;
	    string b;
	    cin>>a>>b;
	    int maxd = 0;
	    int mind = 0;
	    int s = a.length();
	    for(int i=0;i<s;i++){
	        if(a[i]=='?' || b[i]=='?'){
	           maxd++;
	        } else if(a[i] != b[i]){
	            mind++;
	            maxd++;
	        }
	    }
	    cout<<mind<<" "<<maxd<<endl;
	}
}
