#include <iostream>
using namespace std;

// Heapify-down (Max-Heap)
void heapify(int arr[], int n, int i) {
    int largest = i;         // Assume root is largest
    int left = 2 * i + 1;    // left child
    int right = 2 * i + 2;   // right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Build Max-Heap
void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

// Heap Sort (Ascending Order)
void heapSort(int arr[], int n) {
    buildMaxHeap(arr, n);

    // One by one extract elements
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    heapSort(arr, n);  // Sort using Heap Sort

    // Output sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
