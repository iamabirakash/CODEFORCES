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
	    int sorted[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	        sorted[i] = arr[i];
	    }
	    int x = sizeof(sorted) / sizeof(sorted[0]);
	    sort(sorted, sorted + x);
	    bool check = false;
	    for(int i=0;i<a-1;i++){
	        if(arr[i]>arr[i+1] && !check){
	            check = true;
	            int temp = arr[i];
	            arr[i] = arr[i+1];
	            arr[i+1] = temp;
	           // break;
	        }
	    }
	   int count = 0;
	    for(int i=0;i<a;i++){
	        if(sorted[i]!=arr[i]){
	           count++;
	        }
	    }
	    if(count>=1){
	        cout<<"NO"<<endl;
	    } else {
	        cout<<"YES"<<endl;
	    }
	}
}
