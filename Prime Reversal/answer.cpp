#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    int cnta1 = 0;
	    int cnta0 = 0;
	    int cntb1 = 0;
	    int cntb0 = 0;
	    for(char ch : a){
	        if(ch=='1'){
	            cnta1++;
	        } else {
	            cnta0++;
	        }
	    }
	    for(char ch : b){
	        if(ch=='1'){
	            cntb1++;
	        } else {
	            cntb0++;
	        }
	    }
	    
	    if(cnta1==cntb1 && cnta0==cntb0){
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<endl;
	    }
	}
}
