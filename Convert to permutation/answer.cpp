#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long arr[n];
	    int check = true;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int op = 0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]>i+1){
	            // cout<<arr[i]<<" ";
	            check = false;
	            break;
	        }
	        op += (i+1)-arr[i];
	    }
	    if(check){
	        cout<<op<<endl;
	    } else {
	        cout<<-1<<endl;
	    }
	}
}
