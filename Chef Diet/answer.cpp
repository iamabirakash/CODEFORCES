#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int check = true;
	    int s = 0;
	    int idx = 0; 
	    for(int i=0;i<n;i++){
	        s += (arr[i] - k);
	        if(s<0){
	            check = false;
	            idx = i;
	            break;
	        }
	    }
	    if(check){
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<" "<<idx+1<<endl;
	    }
	}
}
