#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int s;
	    cin>>s;
	    string a;
	    cin>>a;
	    int cnt = 0;
	    for(int i=0;i<s;i++){
	        if(a[i]=='1' && a[i+1]=='0'){
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
}
