#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = (n+1)/2;
        int arr[n];
        arr[0] = x;
        int prev = x;
        for(int i=1;i<n;i++){
            if(i%2==0){
                arr[i] = prev+1;
                prev++;
            } else {
                arr[i] = prev*2;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
