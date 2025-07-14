#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int i=0;
	int arr[t];
	int heap_size = 0;
	while(t--){
	    int n;
	    cin>>n;
	    arr[heap_size] = n;
	   // int par = (i-1)/2;
	   int i = heap_size;
	    while(i!=0 && arr[i]<arr[(i-1)/2]){
	        swap(arr[i],arr[(i-1)/2]);
	        i = (i-1)/2;
	    }
	    heap_size++;
	    for(int j=0;j<heap_size;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
}
