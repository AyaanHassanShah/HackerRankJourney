//
//
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* left;
//	Node* right;
//	Node(int d) {
//		data = d;
//		left = right = NULL;
//	}
//};
//
//void topView(Node* root) {
//	if (!root) return;
//
//	queue<pair<Node*, int>> q;  
//	q.push({ root, 0 });
//
//	int minHD = 0, maxHD = 0;
//	vector<int> topNodes(2001, -1); 
//
//	while (!q.empty()) {
//		pair<Node*, int> frontPair = q.front();
//		Node* node = frontPair.first;
//		int hd = frontPair.second;
//		q.pop();
//
//		
//		if (topNodes[hd + 1000] == -1) {
//			topNodes[hd + 1000] = node->data;
//		}
//
//
//		minHD = min(minHD, hd);
//		maxHD = max(maxHD, hd);
//
//		
//		if (node->left) {
//			q.push({ node->left, hd - 1 });
//		}
//
//		
//		if (node->right) {
//			q.push({ node->right, hd + 1 });
//		}
//	}
//
//	
//	for (int i = minHD + 1000; i <= maxHD + 1000; i++) {
//		if (topNodes[i] != -1) {
//			cout << topNodes[i] << " ";
//		}
//	}
//}
