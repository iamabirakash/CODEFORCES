#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int s;
	    cin>>s;
	    int a[s];
	    int b[s];
	    for(int i=0;i<s;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<s;i++){
	        cin>>b[i];
	    }
	    int max = 0;
	    for(int i=0;i<s;i++){
	        int g = a[i]*20;
	        int f = b[i]*10;
	        int r = g-f;
	        if(r>max){
	            max = r;
	        }
	    }
	    cout<<max<<endl;
	}
}
