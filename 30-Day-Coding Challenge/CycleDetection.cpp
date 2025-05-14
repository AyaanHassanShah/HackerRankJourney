//
//#include <iostream>
//using namespace std;
//
//
//class SinglyLinkedListNode {
//public:
//	int data;
//	SinglyLinkedListNode* next;
//
//	SinglyLinkedListNode(int node_data) {
//		this->data = node_data;
//		this->next = nullptr;
//	}
//};
//class SinglyLinkedList
//{
//public:
//	SinglyLinkedListNode* head;
//	SinglyLinkedListNode* tail;
//
//	SinglyLinkedList() {
//		this->head = nullptr;
//		this->tail = nullptr;
//	}
//
//	void insert_node(int node_data) {
//		SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
//
//		if (!this->head) {
//			this->head = node;
//		}
//		else {
//			this->tail->next = node;
//		}
//
//		this->tail = node;
//	}
//
//	bool has_cycle(SinglyLinkedListNode* head) 
//	{
//		SinglyLinkedListNode* Ptr1 = head;
//		SinglyLinkedListNode* Ptr2 = head->next;
//
//		while (Ptr2 && Ptr2->next)
//		{
//			Ptr1 = Ptr1->next;
//			Ptr2 = Ptr2->next;
//
//			if (Ptr1 == Ptr2)
//			{
//				return 1;
//			}
//		}
//		return 0;
//	}
//
//	
//};