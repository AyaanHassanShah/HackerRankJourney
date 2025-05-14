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
//	int NodeCounter(SinglyLinkedListNode* Head)
//	{
//		int Count = 0;
//		SinglyLinkedListNode* P = Head;
//
//		while (P->next != NULL)
//		{
//			Count++;
//			P = P->next;
//		}
//
//		return Count;
//	}
//
//
//	int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
//	{
//		int C1 = NodeCounter(head1);
//		int C2 = NodeCounter(head2);
//
//		if (C1 > C2)
//		{
//			for (int i = 0; i < C1 - C2; i++)
//			{
//				head1 = head1->next;
//			}
//		}
//		else if (C2 > C1)
//		{
//			for (int i = 0; i < C2 - C1; i++)
//			{
//				head2 = head2->next;
//			}
//		}
//
//		while (head1&& head2)
//		{
//			if (head1 == head2)
//			{
//				return head1->data;
//			}
//			else
//			{
//				head1 = head1->next;
//				head2 = head2->next;
//			}
//			
//		}
//
//		return -1;
//	}
//
//	
//	
//};