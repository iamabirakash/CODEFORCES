#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int heap[t];
    for(int i=0;i<t;i++){
        cin>>heap[i];
    }
    int heap_size = t;
    int i = 0;
    while(heap_size>0){
        swap(heap[0],heap[heap_size-1]);
        heap_size--;
        int i = 0;
        while(true){
            int left = 2*i+1;
            int right = 2*i+2;
            int smallest = i;
            if(left<heap_size && heap[left]<heap[smallest])
                smallest = left;
        
            if(right<heap_size and heap[right]<heap[smallest])
                smallest = right;
        
            if(smallest != i){
                swap(heap[i],heap[smallest]);
                i = smallest;
            } else {
                break;
            }
        }
    
        for(int j=0;j<heap_size;j++){
            cout<<heap[j]<<" ";
        }
        cout<<endl;
    }
}
