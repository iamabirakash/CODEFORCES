[Deletion in a Heap](https://www.codechef.com/practice/course/heaps/HEAPF/problems/HEAPEDU2)
Deletion in MIN-HEAP
Here's a step-by-step process for deleting the minimum element (root) from a min-heap:

Remove the Root:

Swap the root with the last leaf (the rightmost leaf of the last level).
Remove the last leaf.
Heapify Down:

Compare the new root with its children.
Swap the root with the smaller of its two children (maintaining the min-heap property).
Repeat this process recursively until the min-heap property is restored.
Here's a simplified pseudocode for deletion in a min-heap:

Function deleteMin():
    If heap is empty:
        Return an error (heap is empty)
    
    Swap heap[0] (root) with heap[size - 1] (last leaf)
    Remove the last element from the heap

    HeapifyDown(0)  // Start the heapify process from the root

Function HeapifyDown(index):
    leftChild = 2 * index + 1
    rightChild = 2 * index + 2
    smallest = index

    If leftChild < size and heap[leftChild] < heap[smallest]:
        smallest = leftChild

    If rightChild < size and heap[rightChild] < heap[smallest]:
        smallest = rightChild

    If smallest != index:
        Swap heap[index] with heap[smallest]
        HeapifyDown(smallest)  // Recursively heapify the affected subtree
Task
Given a Min-Heap
First line contains an integer N, the length of Min-Heap
Second line contains N elements of the heap a1, a2, a3, a4
Perform deletion operation in this heap.
Delete the smallest element, and print the heap array, until the heap is empty.
Sample 1:
Input
Output
5
1 2 4 5 3
2 3 4 5 
3 5 4 
4 5 
5
