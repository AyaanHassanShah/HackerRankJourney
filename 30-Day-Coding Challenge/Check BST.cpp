//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int Data;
//	Node* Left;
//	Node* Right;
//	Node(int data) : Data(data), Left(NULL), Right(NULL) {}
//};
//
//class Tree {
//	Node* Root;
//
//public:
//	Tree() : Root(NULL) {}
//
//	~Tree()
//	{
//		DeleteTree(Root);
//	}
//
//	void CreateTree(int data)
//	{
//		Node* New = new Node(data);
//		if (Root == NULL) {
//			Root = New;
//			return;
//		}
//		Node* Parent = NULL;
//		Node* Current = Root;
//		while (Current != NULL) {
//			Parent = Current;
//			if (data == Current->Data)
//			{
//				delete New;
//				return;
//			}
//			else if (data < Current->Data)
//			{
//				Current = Current->Left;
//			}
//			else {
//				Current = Current->Right;
//			}
//		}
//
//		if (data < Parent->Data)
//		{
//			Parent->Left = New;
//		}
//		else {
//			Parent->Right = New;
//		}
//	}
//
//	void DeleteTree(Node* node)
//	{
//		if (node != NULL) {
//			DeleteTree(node->Left);
//			DeleteTree(node->Right);
//			delete node;
//		}
//	}
//	void PreOrder(Node* P) const
//	{
//		if (P == NULL) {
//			return;
//		}
//
//		cout << P->Data << " ";
//		PreOrder(P->Left);
//		PreOrder(P->Right);
//	}
//
//	void InOrder(Node* P) const
//	{
//		if (P == NULL)
//		{
//			return;
//		}
//
//		InOrder(P->Left);
//		cout << P->Data << " ";
//		InOrder(P->Right);
//	}
//
//	void PostOrder(Node* P) const
//	{
//		if (P == NULL) {
//			return;
//		}
//
//		PostOrder(P->Left);
//		PostOrder(P->Right);
//		cout << P->Data << " ";
//	}
//	bool BST(Node* P)
//	{
//		static Node* Prev = NULL;
//		if (P != NULL)
//		{
//			if (!BST(P->Left))
//			{
//				return false;
//			}
//
//
//			if (Prev != NULL && P->Data <= Prev->Data)
//			{
//				return false;
//			}
//			Prev = P;
//			return BST(P->Right);
//
//		}
//		else
//		{
//			return true;
//		}
//
//	}
//	bool Search(Node* P, int key)
//	{
//		if (P != NULL)
//		{
//			if (P->Data == key)
//			{
//				return true;
//			}
//			else
//			{
//				if (P->Data > key)
//				{
//					return Search(P->Left, key);
//				}
//				else
//				{
//					return Search(P->Right, key);
//				}
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//	Node* GetRoot() const
//	{
//		return Root;
//	}
//};
//
//int main() {
//	Tree Binary;
//	Binary.CreateTree(5);
//	Binary.CreateTree(3);
//	Binary.CreateTree(6);
//	Binary.CreateTree(1);
//	Binary.CreateTree(4);
//	 Binary.CreateTree(14);
//	 Binary.CreateTree(4);
//	 Binary.CreateTree(7);
//	 Binary.CreateTree(13);
//	 Binary.CreateTree(9);
//
//	cout << "PreOrderTraversal\n";
//	Binary.PreOrder(Binary.GetRoot());
//
//	cout << "\nInOrderTraversal\n";
//	Binary.InOrder(Binary.GetRoot());
//
//	cout << "\nPostOrderTraversal\n";
//	Binary.PostOrder(Binary.GetRoot());
//	cout << endl;
//	if (Binary.BST(Binary.GetRoot()))
//	{
//		cout << "\nBinarySearchTree";
//	}
//	else
//	{
//		cout << "\nNot a Binary Search Tree";
//	}
//	cout << endl;
//	if (Binary.Search(Binary.GetRoot(), 2))
//	{
//		cout << "\nSearch Successful";
//	}
//	else
//	{
//		cout << "\nSearch Failed";
//	}
//	return 0;
//}