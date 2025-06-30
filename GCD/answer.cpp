#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
	    int n;
	    long long k;
	    cin>>n>>k;
	    long long sum = (long long)n*(n+1)/2;
	    if(k<sum){
	        cout<<-1<<endl;
	    } else {
	        long long x = k-sum+1;
	        for(int i=0;i<n-1;i++){
	            cout<<1<<" ";
	        }
	        cout<<x<<endl;
	    }
	}
}
