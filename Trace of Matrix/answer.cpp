#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    int arr[a][a];
	    for(int i=0;i<a;i++){
	        for(int j=0;j<a;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int max = 0;
	    for(int i=0;i<a;i++){
	        for(int j=0;j<a;j++){
	            int sum = 0;
	            int idxi = i;
	            int idxj = j;
	            while(idxi<a && idxj<a){
	                sum += arr[idxi][idxj];
	                idxi++;
	                idxj++;
	            }
	            if(sum>max){
	                max = sum;
	            }
	        }
	    }
	    cout<<max;
	    cout<<endl;
	}
}
