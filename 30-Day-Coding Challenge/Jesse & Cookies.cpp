//
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//
//int cookies(int k, vector<int> A) {
//    priority_queue<int, vector<int>, greater<int>> minHeap(A.begin(), A.end()); // Min-heap
//    int operations = 0;
//
//    while (minHeap.size() > 1 && minHeap.top() < k) {
//        int least_sweet = minHeap.top(); minHeap.pop();
//        int second_least_sweet = minHeap.top(); minHeap.pop();
//
//        int new_cookie = least_sweet + 2 * second_least_sweet;
//        minHeap.push(new_cookie);
//        operations++;
//    }
//
//    return (minHeap.top() >= k) ? operations : -1;
//}
