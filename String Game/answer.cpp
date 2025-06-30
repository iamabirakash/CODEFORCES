#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a;
        string b;
        cin>>a;
        cin>>b;
        int count0 = 0, count1 = 0;
        for (char c : b) {
            if(c=='0') count0++;
            else count1++;
        }
        int moves = min(count0, count1);
        if (moves % 2 == 1)
            cout << "Zlatan"<<endl;
        else
            cout << "Ramos"<<endl;
    }
}
