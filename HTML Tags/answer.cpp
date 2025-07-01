#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool check = true;
        int n = s.length();
        if (s.length()<4 || s[0]!='<' || s[1]!='/' || s[n-1]!='>') {
            check = false;
        } else {
            for (int i = 2; i < s.length() - 1; ++i) {
                if (!islower(s[i]) && !isdigit(s[i])) {
                    check = false;
                    break;
                }
            }
        }

        if (check) {
            cout << "Success" << endl;
        } else {
            cout << "Error" << endl;
        }
    }
    return 0;
}
