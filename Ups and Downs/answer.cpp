#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    int arr[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<a-1;i++){
	        if(i%2==0){
	            if(arr[i]>arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        } else {
	            if(arr[i]<arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	    }
	    for(int i=0;i<a;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
}
