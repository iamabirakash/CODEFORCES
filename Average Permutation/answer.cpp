#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int a[100005];
        for (int i = 0; i < n; ++i) {
            a[i] = i + 1;
        }
        if (n >= 3) {
            int temp1 = a[n - 3];
            int temp2 = a[0];
            int temp3 = a[n - 2];
            a[n - 2] = temp1;
            a[n - 3] = temp2;
            a[0] = temp3;
        }

        if (n >= 5) {
            swap(a[1], a[n - 4]);
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
