//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//void BuildHeap(vector<int>& heap, int data, int& utilize, int k)
//{
//    if (utilize < k) {
//        heap.push_back(data);
//        int index = utilize++;
//
//        
//        while (index > 0)
//        {
//            int parent = (index - 1) / 2;
//            if (heap[parent] > heap[index]) {  
//                swap(heap[parent], heap[index]);
//                index = parent;
//            }
//            else {
//                break;
//            }
//        }
//    }
//    else if (data > heap[0]) {  
//        heap[0] = data;
//        Heapify(heap, k, 0);
//    }
//}
//
//void Heapify(vector<int>& heap, int size, int index)
//{
//    int smallest = index;
//    int left = 2 * index + 1;
//    int right = 2 * index + 2;
//
//    if (left < size && heap[left] < heap[smallest])
//        smallest = left;
//
//    if (right < size && heap[right] < heap[smallest])
//        smallest = right;
//
//    if (smallest != index)
//    {
//        swap(heap[smallest], heap[index]);
//        Heapify(heap, size, smallest);
//    }
//}
//
//int kthLargest(vector<int> nums, int k)
//{
//    vector<int> heap;
//    int utilize = 0;
//
//    for (int num : nums) {
//        BuildHeap(heap, num, utilize, k);
//    }
//
//    return heap[0];
//}
//
//int main() {
//    vector<int> nums = { 3, 2, 1, 5, 6, 4 };
//    int k = 2;
//    cout << "Kth largest element: " << kthLargest(nums, k) << endl;
//    return 0;
//}
