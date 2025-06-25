#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int a,b;
        cin >>a>>b;
        int arr[a];
        for (int i = 0;i<a; i++) {
            cin >> arr[i];
        }
        if (b==1) {
            bool sorted = true;
            for (int i=0; i<a-1; i++) {
                if (arr[i] > arr[i+1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
