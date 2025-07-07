#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    vector<long long> B(n);
	    long long sumB = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> B[i];
	        sumB += B[i];
	    }
	    
	    long long totalA = sumB / (n + 1);
	    vector<long long> A(n);
	    
	    for (int i = 0; i < n; i++) {
	        A[i] = (B[i] - totalA);
	    }
	    
	    for (int i = 0; i < n; i++) {
	        cout << A[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
