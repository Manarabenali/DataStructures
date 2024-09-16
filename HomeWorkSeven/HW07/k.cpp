#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to create an empty linked list
Node *createLinkedList()
{
    return nullptr; // List is initially empty
}

// Function to insert a node at the beginning
void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Function to insert a node before a given node
void insertBefore(Node *&head, Node *nextNode, int value)
{
    if (head == nullptr || nextNode == nullptr)
    {
        std::cout << "Cannot insert before a null node." << std::endl;
        return;
    }
    if (head == nextNode)
    {
        insertAtBeginning(head, value);
        return;
    }

    Node *current = head;
    while (current != nullptr && current->next != nextNode)
    {
        current = current->next;
    }
    if (current == nullptr)
    {
        std::cout << "The given next node is not found in the list." << std::endl;
        return;
    }
    Node *newNode = new Node(value);
    newNode->next = nextNode;
    current->next = newNode;
}

// Function to delete the first node
void deleteFirstNode(Node *&head)
{
    if (head == nullptr)
    {
        std::cout << "List is empty." << std::endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

// Function to delete the last node
void deleteLastNode(Node *&head)
{
    if (head == nullptr)
    {
        std::cout << "List is empty." << std::endl;
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}

// Function to delete the node before a given node
void deleteBefore(Node *&head, Node *nextNode)
{
    if (head == nullptr || nextNode == nullptr || head == nextNode)
    {
        std::cout << "No node to delete before the given node." << std::endl;
        return;
    }
    if (head->next == nextNode)
    {
        deleteFirstNode(head);
        return;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->next != nextNode)
    {
        current = current->next;
    }
    if (current->next == nullptr)
    {
        std::cout << "The given next node is not found in the list." << std::endl;
        return;
    }
    Node *temp = current->next;
    current->next = nextNode;
    delete temp;
}

// Function to traverse the linked list
void traverseLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to find a node in the linked list
Node *findNode(Node *head, int value)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == value)
        {
            return current; // Node found
        }
        current = current->next;
    }
    return nullptr; // Node not found
}


void insertafter(Node*prevNode,int value){
         if(prevNode==nullptr){
             cout<<"the prev node cannot be null"<<endl;
             return;
         }
         Node*newNode=new Node(value);//new node 
         newNode->next=prevNode->next;//link the node with the node before
         newNode->next=newNode;//link the old node with the new one 
     }
     
       
     // delete function
 void deleteafter(Node*prevNode){
     if (prevNode==nullptr||prevNode->next==nullptr){
         cout<<" no node to delete the given node "<<endl;
         return;}
     
     Node*temp=prevNode->next;// select the node will be deleted 
     prevNode ->next=temp ->next;//linked the old note with the one after the deleted node 
   delete temp;
  }

int main()
{
    Node *head = createLinkedList();

    // Insert nodes
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 7);
    insertAtEnd(head, 9);

    std::cout << "Linked List after insertions: ";
    traverseLinkedList(head); // Output: 5 3 7 9

  Node*nodeK=findNode(head,3);
  insertafter(nodeK,4);
  cout<<"after unserting 4after 3: "<<endl;


    // Insert before a node
    
    insertBefore(head, nodeK, 2);
    std::cout << "After inserting 2 before 3: ";
    traverseLinkedList(head); // Output: 5 2 3 4 7 9

    // Delete the first node
    deleteFirstNode(head);
    std::cout << "After deleting the first node: ";
    traverseLinkedList(head); // Output: 2 3 4 7 9

    // Delete the last node
    deleteLastNode(head);
    std::cout << "After deleting the last node: ";
    traverseLinkedList(head); // Output: 2 3 4 7

     
     deleteafter(nodeK);
    cout<<"after deleting the node after 3:"<<endl;
     traverseLinkedList(head);

    // Delete the node before a node
    deleteBefore(head, nodeK);
    std::cout << "After deleting the node before 3: ";
    traverseLinkedList(head); // Output: 3 7

 
    return 0;
}