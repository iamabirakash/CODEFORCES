#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int cnt = 0;
	    bool check = false;
	    int s;
	    cin>>s;
    	string a;
	    cin>>a;
	   // for(int j=0;j<=s;j++){
	    for(char c : a){
	        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
	       // if(a[j]!='a' || a[j]!='e' || a[j]!='i' || a[j]!='o' || a[j]!='u'){
	            cnt++;
        	    if(cnt>=4){
        	        check = true;
        	        break;
        	    }
	        } else {
	            cnt = 0;
	        }
	    }
	    if(check){
	        cout<<"NO"<<endl;
	    } else {
	        cout<<"YES"<<endl;
	    }
	}
	
}
