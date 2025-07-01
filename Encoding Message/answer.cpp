#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    string s;
	    cin>>s;
	    for(int i=0;i<a-1;i++){
	       swap(s[i],s[i+1]);
	       i++;
	   }
	    int idx = 0;
	    string ss="";
	    for(char c : s){
	        int x = c;
	        char ch = 122+97-x;
	        ss += ch;
	    }
	    cout<<ss<<endl;
	}
}
