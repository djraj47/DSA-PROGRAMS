
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int, inserts
// a new node on the front of the list.
void addhead(Node** head, int val)
{

	// 1. allocate node
	Node* n = new Node();

	// 2. put in the data
	n->data = val;

	// 3. Make next of new node as head
	n->next = (*head);

	// 4. move the head to point
	// to the new node
	(*head) = n;
}

// Given a node prev_node, insert a new
// node after the given prev_node
void insertAfter(Node* prev_node, int val)
{
	// 1. check if the given prev_node
	// is NULL
	if (prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
		return;
	}

	// 2. allocate new node
	Node* n = new Node();

	// 3. put in the data
	n->data = val;

	// 4. Make next of new node
	// as next of prev_node
	n->next = prev_node->next;

	// 5. move the next of prev_node
	// as n
	prev_node->next = n;
}

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// appends a new node at the end
void append(Node* & head, int val)
{

	// 1. allocate node
	Node* n = new Node();

	//used in step 5
	Node *last = head;

	// 2. put in the data
	n->data = val;

	/* 3. This new node is going to be
	the last node, so make next of
	it as NULL*/
	n->next = NULL;

	/* 4. If the Linked List is empty,
	then make the new node as head */
	if (head == NULL)
	{
		head = n;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
	{
		last = last->next;
	}

	/* 6. Change the next of last node */
	last->next = n;
	return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

// Driver code
int main()
{

	// Start with the empty list
	Node* head = NULL;
	
	// Insert 6. So linked list becomes 6->NULL
	append(head, 6);
	
	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	addhead(&head, 7);
	
	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	addhead(&head, 1);
	
	// Insert 4 at the end. So
	// linked list becomes 1->7->6->4->NULL
	append(head, 4);
	
	// Insert 8, after 7. So linked
	// list becomes 1->7->8->6->4->NULL
	insertAfter(head->next, 8);
	
	cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}
// This code is contributed by rathbhupendra, arkajyotibasak
