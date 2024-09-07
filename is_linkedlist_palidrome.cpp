#include <iostream>
using namespace std;
 
 struct Node{
     int data;
     Node *next;
 };

 void printLinkedList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

 Node* inputLinkedList(int nodes){
    Node *head = nullptr; // head ptr is pointing the first node
    int value;
    for (int i = 1; i <= nodes; i++)
    {
        cout << "Enter the value of node " << i  << ": ";
        cin >> value;

        Node *newNode = new Node(); // dynamically creating new node
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            // if starting node (head) is Null i-e list is empty then add new node
            head = newNode;
        }
        else
        {
            // The list is not empty, traverse the list to find the last node
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    return head;
 }

 Node* reverseLinkedList(Node *head)
 {
     Node *current = head;
     Node *next = nullptr;
     Node *prev = nullptr;

     while (current != nullptr)
     {
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;
     }

     return prev;
 }

bool comparsion(Node *head1,Node *head2) {
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data != head2->data) {
            return false; 
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // return when end of both lists and identical data
  return (head1 == nullptr && head2 == nullptr);
}

 int main()
 {

     int nodes;
     cout << "How many nodes do you want in the linked list? ";
     cin >> nodes; 
     Node *start = inputLinkedList(nodes);
     printLinkedList(start);
     Node *rev = reverseLinkedList(start);
     printLinkedList(rev);
    if (comparsion(start, rev)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
 }