
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    vector<long long> b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    map<int,long long> mincook;
	    for(int i=0;i<n;i++){
	            if(mincook.find(a[i])==mincook.end()){
	                mincook[a[i]] = b[i];
	            } else {
	                mincook[a[i]] = min(mincook[a[i]],b[i]);
	            }
	    }
	    if(mincook.size()<k){
	        cout<<-1<<endl;
	    } else {
	        vector<long long> sum;
	        for(auto &p : mincook){
	            sum.push_back(p.second);
	        }
	        long long tt = 0;
	        sort(sum.begin(),sum.end());
	        for (int i=0;i<k;++i){
                tt += sum[i];
            }
            cout << tt << endl;
	    }
	}
	return 0;
}
