//
//#include <iostream>
//using namespace std;
//
//
//class SinglyLinkedListNode {
//public:
//    int data;
//    SinglyLinkedListNode* next;
//
//    SinglyLinkedListNode(int node_data) {
//        this->data = node_data;
//        this->next = nullptr;
//    }
//};
//
//class SinglyLinkedList {
//public:
//    SinglyLinkedListNode* head;
//    SinglyLinkedListNode* tail;
//
//    SinglyLinkedList() {
//        this->head = nullptr;
//        this->tail = nullptr;
//    }
//
//    void insert_node(int node_data) {
//        SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
//
//        if (!this->head) {
//            this->head = node;
//        }
//        else {
//            this->tail->next = node;
//        }
//
//        this->tail = node;
//    }
//};
//
//
//class BinarySearchTreeNode {
//public:
//    int data;
//    BinarySearchTreeNode* left;
//    BinarySearchTreeNode* right;
//    int Height;
//
//    BinarySearchTreeNode(int node_data) {
//        data = node_data;
//        left = right = NULL;
//        
//    }
//};
//
//int Height(BinarySearchTreeNode* P) {
//    if (P == NULL) {
//        return 0;
//    }
//    return P->Height;
//}
//
//int BalanceFactor(BinarySearchTreeNode* P) {
//    if (P == NULL) {
//        return 0;
//    }
//    return Height(P->left) - Height(P->right);
//}
//
//BinarySearchTreeNode* rightRotate(BinarySearchTreeNode* y) {
//    BinarySearchTreeNode* x = y->left;
//    BinarySearchTreeNode* T = x->right;
//
//    x->right = y;
//    y->left = T;
//
//    y->Height = max(Height(y->left), Height(y->right)) + 1;
//    x->Height = max(Height(x->left), Height(x->right)) + 1;
//
//    return x;
//}
//
//BinarySearchTreeNode* leftRotate(BinarySearchTreeNode* x) {
//    BinarySearchTreeNode* y = x->right;
//    BinarySearchTreeNode* T = y->left;
//
//    y->left = x;
//    x->right = T;
//
//    y->Height = max(Height(y->left), Height(y->right)) + 1;
//    x->Height = max(Height(x->left), Height(x->right)) + 1;
//
//    return y;
//}
//
//BinarySearchTreeNode* insert_node_into_binary_search_tree(BinarySearchTreeNode* root, int node_data) {
//    if (!root) {
//        root = new BinarySearchTreeNode(node_data);
//    }
//    else {
//        if (node_data <= root->data) {
//            root->left = insert_node_into_binary_search_tree(root->left, node_data);
//        }
//        else {
//            root->right = insert_node_into_binary_search_tree(root->right, node_data);
//        }
//    }
//
//    root->Height = max(Height(root->left), Height(root->right)) + 1;
//    int BF = BalanceFactor(root);
//
//    if (BF > 1 && node_data < root->left->data) {
//        return rightRotate(root); // left left Case
//    }
//
//    if (BF < -1 && node_data > root->right->data) {
//        return leftRotate(root); // right right Case
//    }
//
//    if (BF > 1 && node_data > root->left->data) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root); // left right Case
//    }
//
//    if (BF < -1 && node_data < root->right->data) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root); // right left Case
//    }
//
//    return root;
//}
//
//int main()
//{
//
//}