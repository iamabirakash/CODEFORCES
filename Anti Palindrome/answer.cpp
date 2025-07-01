#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;
    while (C--) {
        int N;
        string S;
        cin >> N >> S;

        vector<int> freq(26, 0);
        for (char ch : S) {
            freq[ch - 'a']++;
        }

        int odd_count = 0;
        for (int f : freq) {
            if (f % 2 == 1) odd_count++;
        }

        // CASE 1: Already anti-palindrome
        bool is_semi_palindrome = false;
        if (N % 2 == 0) {
            is_semi_palindrome = (odd_count == 0);
        } else {
            is_semi_palindrome = (odd_count == 1);
        }

        if (!is_semi_palindrome) {
            cout << 0 << '\n';
        } else {
            // CASE 2: It's a semi-palindrome
            if (N % 2 == 0) {
                cout << 1 << '\n';
            } else {
                int distinct = 0;
                for (int f : freq) {
                    if (f > 0) distinct++;
                }
                if (distinct == 1)
                    cout << 2 << '\n';
                else
                    cout << 1 << '\n';
            }
        }
    }
    return 0;
}
