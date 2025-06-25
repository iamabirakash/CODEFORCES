#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        bool check = true;
        for(int i=0;i<a;i++){
            if(arr[i]<arr[0]){
                check = false;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        // bool sorted = true;
        // int minn = arr[a-1];
        // for(int i=0;i<a-1;i++){
        //     if(arr[i]<minn){
        //         minn = arr[i];
        //     }
        // }
        // bool check = true;
        // for(int i=0;i<a;i++){
        //     if(arr[i]<arr[0]){
        //         check = false;
        //     }
        // }
        // for(int i=1;i<a-1;i++){
        //     if((arr[i-1]<arr[i])&&(arr[i]>arr[i+1])){
        //         swap(arr[i],arr[i+1]);
        //     }
        // }
        // for(int i=0;i<a-1;i++){
        //     if(arr[i]>arr[i+1]){
        //         sorted = false;
        //         break;
        //     }
        // }
        // if(check && sorted){
        //     cout<<"YES"<<endl;
        // } else if(arr[0]!=minn) {
        //     cout<<"NO"<<endl;
        // }
    }
}
