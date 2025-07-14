[Insertion in a Heap](https://www.codechef.com/practice/course/heaps/HEAPF/problems/HEAPEDU1)
A min-heap is a binary tree data structure that satisfies the heap property. Heap property refers to the specific ordering of elements in a binary heap. In a min heap, the value of any node is less than or equal to the values of its children.

The binary tree representing the heap is always complete. This means that the tree is completely filled at all levels except possibly the lowest, which is filled from left to right.

Min-heaps are often implemented using an array, where the children of the node at index i are located at indices 2i + 1 (left child) and 2i + 2 (right child). The parent of a node at index i is at index (i - 1) / 2.

Insertion in Min Heap
In a binary heap, the elements are stored in an array
To insert a new element, you add it at the end of the array (as the last leaf in the binary tree).
Then, you compare the new element with its parent and swap them if necessary until the heap property is restored.
The pseudo-code given below shows how the numbers are added to your heap and how your heap is updated once a number is added.

Class MinHeap:
    Public:
        heap: List of integers

        // Helper function to maintain the heap property by moving the element up
        Function heapifyUp(index):
            While index > 0:
                parentIndex = (index - 1) / 2
                If heap[index] < heap[parentIndex]:
                    Swap heap[index] with heap[parentIndex]
                    index = parentIndex
                Else:
                    Break

        // Function to insert a new element into the heap
        Function insert(value):
            Append value to heap
            Call heapifyUp(heap.size() - 1)

Task
You are given an integer N (representing the count of elements) and N integers
You need to add these N integers in your heap
You have to print the array after each insertion
Sample 1:
Input
Output
5
5
4
3
2
1
5 
4 5 
3 5 4 
2 3 4 5 
1 2 4 5 3 
