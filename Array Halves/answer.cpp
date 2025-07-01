#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> arr[i];
        }

        int count = 0;
        long long ans = 0;
        for (int i = 0; i < 2 * n; ++i) {
            if (arr[i] > n) {
                count++;
            } else {
                ans += count;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
