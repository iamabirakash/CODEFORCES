#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0,l = -1,r = -1;

        for(int i = 1;i < n;i++){
            if(s[i] != s[i-1]){
                l = i;
                break;
            }
        }
        for(int i = n-2;i >= l;i--){
            if(s[i+1] != s[i]){
                r = i;
                break;
            }
        }
        if(l==-1 || r==-1){
            cout<<n<<endl;
            continue;
        }
        ans = (l+1 + (n-r));
        if(s[l] != s[r]) cout << ans - 1 << endl;
        else cout << ans - 2 << endl;
    }
    return 0;
}
