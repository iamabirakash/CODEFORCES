#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<string,int> mpp;
	    for(int i=0;i<3*n;i++){
	        string s;
	        int c;
	        cin>>s>>c;
	        mpp[s] += c;
	    }
	    vector<int> ans;
	    for(auto i : mpp){
	        ans.push_back(i.second);
	    }
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	    
	}
}
