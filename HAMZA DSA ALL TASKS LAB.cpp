 // LAB NO 1      
#include <iostream>
using namespace std;
int main() {
    int num =18
    int* ptr = &num;
    cout << "value of num " << num << endl;
    cout << "value of *ptr << *ptr << endl;
    *ptr =30;
    cout << "Modifiye  num " << num << endl;
    cout << "Modifiye  *ptr " << *ptr << endl;
    cout << "Address stored in ptr " << ptr << endl;
    cout << "Address of num: " << &num << endl;
    return 0;
}
  //LAB NO 2
#include <iostream>
using namespace std;
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
    if (arr[i] > maxVal) {
    maxVal = arr[i];}
    }    
    return maxVal;
}
int main() {
    int arr[] = {1,2,3,7,8,9,10,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    cout << "Max value in array is: " << max << endl;
    return 0;
}
// LAB NO 3
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {} };
class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() : head(nullptr) {}
    void insertAtStart(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    displayList();
    }
    void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
    head = newNode;
    } else {
    Node* temp = head;
    while (temp->next != nullptr) {
    temp = temp->next; }
    temp->next = newNode; }
    displayList(); }
    void displayList() {
    if (head == nullptr) {
    cout << "List is empty." << endl;
    return; 
	}
    Node* temp = head;
    while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    }
};
int main() {
    SinglyLinkedList list;
    list.insertAtStart(10);
    list.insertAtEnd(15);
    list.insertAtStart(25);
    list.insertAtEnd(30);
    return 0;
}
 // LAB NO 3       
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
    head = nullptr;
    }
    void insertAtPosition(int data, int position) {
    Node* newNode = new Node(data);
    if (position < 1) {
    cout << "Invalid position" << endl;
    return;
    }

    if (position == 1) {
    newNode->next = head;
    head = newNode;
    return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != nullptr && count < position - 1) {
    temp = temp->next;
    count++;
    }
    if (temp == nullptr) {
    cout << "Position out of range is" << endl;
    return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    }
    void display() {
    Node* temp = head;
    while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    }
};
int main() {
    LinkedList list;
    list.insertAtPosition(15, 1);
    list.insertAtPosition(25, 2);
    list.insertAtPosition(35, 3);
    list.insertAtPosition(45, 3);
    list.display();
    list.insertAtPosition(5, 1);
    list.display();
    list.insertAtPosition(50, 10); 
    list.display();
    return 0;
}
  //LAB NO 5
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
    data = value;
    next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
    head = nullptr;
    }
    void addNode(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
    head = newNode;
    return;
    }
    Node* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = newNode;
    }
    void displayFirstNode() {
    if (head) {
    cout << "First Node : " << head->data << endl;
    } else {
    cout << " empty list" << endl;}
   }
    void displayLastNode() {
    if (head) {
    Node* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    cout << "Last Node : " << temp->data << endl;
    } else {
    cout << " empty list" << endl; }
    }
    void displayNthNode(int n) {
    if (head) {
    Node* temp = head;
    int count = 1;
    while (temp && count < n) {
    temp = temp->next;
    count++;}
    if (temp) {
    cout << "nth Node : " << temp->data << endl;} 
	else {
  cout << "nth node does not exist " << endl;
    }
    } else {
    cout << " empty list" << endl;
    }
    }
    void displayCenterNode() {
    if (head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
    fast = fast->next->next;
    slow = slow->next;
    }
    cout << "Center Node : " << slow->data << endl;
    } else {
    cout << "empty list" << endl;
    }
    }
    void display() {
    if (head) {
    Node* temp = head;
    while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    } else {
    cout << "List is empty" << endl;}
    }
};
int main() {
    LinkedList list;
    list.addNode(70);
    list.addNode(80);
    list.addNode(50);
    list.addNode(40);
    list.addNode(10);
    list.displayFirstNode();
    list.displayLastNode();
    list.displayNthNode(3);
    list.displayCenterNode();
    return 0;
} 
  // LAB NO 6
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
    data = value;
    next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
    head = nullptr;
    }
    void addNode(int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
    head = newNode;
    return;
    }
    Node* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = newNode;
    }
    void deleteFirstNode() {
    if (head) {
    Node* temp = head;
    head = head->next;
    delete temp;
    } else {
    cout << "empty list" << endl;}
    }
    void deleteLastNode() {
    if (head) {
    if (head->next == nullptr) {
    delete head;
    head = nullptr;
    return; 
	}
    Node* temp = head;
    while (temp->next && temp->next->next) {
    temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    } else {
    cout << "empty list" << endl;
    }
    }
    void deleteNthNode(int n) {
    if (head) {
    if (n == 1) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
    }
    Node* temp = head;
    int count = 1;
    while (temp->next && count < n - 1) {
    temp = temp->next;
    count++;
    }
    if (temp->next) {
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    } else {
    cout << "nth node does not exist" << endl;
    }
   } else {
    cout << "empty list" << endl;
    }
    }
    void deleteCenterNode() {
    if (head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;
    while (fast && fast->next) {
    fast = fast->next->next;
    prev = slow;
    slow = slow->next;
    }
    if (prev) {
    prev->next = slow->next;
    } else { 
    head = head->next;
    }
    delete slow;
    } else {
    cout << "empty list" << endl;
    }
    }
    void display() {
    if (head) {
    Node* temp = head;
    while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    } else {
    cout << "empty list" << endl;
    }
    }
};
int main() {
    LinkedList list;
    list.addNode(50);
    list.addNode(70);
    list.addNode(90);
    list.addNode(60);
    list.addNode(40);
    cout << "Original List: ";
    list.display();
    list.deleteFirstNode();
    cout << "Deleting First Node: ";
    list.display();
    list.deleteLastNode();
    cout << "Deleting Last Node: ";
    list.display();
    list.deleteNthNode(2);
    cout << "Deleting 2nd Node: ";
    list.display();
    list.deleteCenterNode();
    cout << "Deleting Center Node: ";
    list.display();
    return 0;
}
// LAB NO 7
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
    }
};
class DoublyLinkedList {
public:
    Node* head;
    DoublyLinkedList() {
    head = nullptr;
    }
    void insertAtFirst(int data) {
    Node* newNode = new Node(data);
    if (head) {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    } else {
    head = newNode;
    }
    }
    void insertAtLast(int data) {
    Node* newNode = new Node(data);
    if (head) {
    Node* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    } else {
    head = newNode;
    }
    }
    void insertAtNth(int data, int n) {
    Node* newNode = new Node(data);
    if (n == 1) {
    insertAtFirst(data);
    return;
    }
    Node* temp = head;
    int count = 1;
    while (temp && count < n - 1) {
    temp = temp->next;
    count++;
    }
    if (temp) {
    newNode->next = temp->next;
    if (temp->next) {
    temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    } else {
    cout << "Position out of range" << endl;
    }
    }
    void insertAtCenter(int data) {
    if (head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
    fast = fast->next->next;
    slow = slow->next;
    }
    Node* newNode = new Node(data);
    newNode->next = slow->next;
    if (slow->next) {
    slow->next->prev = newNode;
    }
    slow->next = newNode;
    newNode->prev = slow;
    } else {
    head = new Node(data);
    }
    }
    void display() {
    Node* temp = head;
    while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    }
    void displayReverse() {
    Node* temp = head;
    if (!temp) {
    return;
    }
    while (temp->next) {
    temp = temp->next;
    }
    while (temp) {
    cout << temp->data << " ";
    temp = temp->prev;
    }
    cout << endl;
    }
};
int main() {
    DoublyLinkedList list;
    list.insertAtFirst(10);
    list.insertAtLast(15);
    list.insertAtLast(16);
    list.insertAtNth(27, 9);
    list.insertAtCenter(48);
    cout << "List in order: ";
    list.display();
    cout << "List in reverse: ";
    list.displayReverse();
    return 0;
}
// LAB NO 8
#include <iostream>
using namespace std;
class SinglyNode {
public:
    int data;
    SinglyNode* next;
    SinglyNode(int value) {
    data = value;
    next = nullptr;
    }
};
class SinglyLinkedList {
public:
    SinglyNode* head;
    SinglyLinkedList() {
    head = nullptr;
    }
    void addNode(int data) {
    SinglyNode* newNode = new SinglyNode(data);
    if (!head) {
    head = newNode;
    } else {
    SinglyNode* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = newNode;
    }
    }
    void display() {
    SinglyNode* temp = head;
    while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    }
    void merge(SinglyLinkedList& other) {
    if (!head) {
    head = other.head;
    } else {
    SinglyNode* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = other.head;
    }
    other.head = nullptr;
    }
};
class DoublyNode {
public:
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
    }
};
class DoublyLinkedList {
public:
    DoublyNode* head;
    DoublyLinkedList() {
    head = nullptr;
    }
    void addNode(int data) {
    DoublyNode* newNode = new DoublyNode(data);
    if (!head) {
    head = newNode;
    } else {
    DoublyNode* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    }
    }
    void display() {
    DoublyNode* temp = head;
    while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
    }
    void merge(DoublyLinkedList& other) {
    if (!head) {
    head = other.head;
    } else {
    DoublyNode* temp = head;
    while (temp->next) {
    temp = temp->next;
    }
    temp->next = other.head;
    if (other.head) {
    other.head->prev = temp;
    }
    }
    other.head = nullptr;
    }
};
int main() {
    SinglyLinkedList list1, list2;
    list1.addNode(1);
    list1.addNode(2);
    list1.addNode(3);
    list2.addNode(4);
    list2.addNode(5);
    list2.addNode(6);
    cout << "Singly Linked List 1: ";
    list1.display();
    cout << "Singly Linked List 2: ";
    list2.display();
    list1.merge(list2);
    cout << "Merged Singly Linked List: ";
    list1.display();
    DoublyLinkedList dList1, dList2;
    dList1.addNode(1);
    dList1.addNode(2);
    dList1.addNode(3);
    dList2.addNode(4);
    dList2.addNode(5);
    dList2.addNode(6);
    cout << "Doubly Linked List 1: ";
    dList1.display();
    cout << "Doubly Linked List 2: ";
    dList2.display();
    dList1.merge(dList2);
    cout << "Merged Doubly Linked List: ";
    dList1.display();
    return 0;
}

// LAB NO 9
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
    data = value;
    next = nullptr;
    }
};
class CircularLinkedList {
public:
    Node* head;
    CircularLinkedList() {
    head = nullptr;
    }
    void insertAtFirst(int data) {
    Node* newNode = new Node(data);
    if (!head) {
    head = newNode;
    newNode->next = head;
    } else {
    Node* temp = head;
    while (temp->next != head) {
    temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    }
    }
    void insertAtLast(int data) {
    Node* newNode = new Node(data);
    if (!head) {
   head = newNode;
    newNode->next = head;
    } else {
    Node* temp = head;
    while (temp->next != head) {
    temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    }
    }
    void insertAtNth(int data, int n) {
    Node* newNode = new Node(data);
    if (n == 1) {
    insertAtFirst(data);
    return;
    }
    Node* temp = head;
    int count = 1;
    while (temp->next != head && count < n - 1) {
    temp = temp->next;
    count++;
    }
    if (count == n - 1) {
    newNode->next = temp->next;
    temp->next = newNode;
    } else {
    cout << "Position out of range" << endl;
    }
    }
    void insertAtCenter(int data) {
    if (head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next != head && fast->next->next != head) {
    fast = fast->next->next;
    slow = slow->next;
    }
    Node* newNode = new Node(data);
    newNode->next = slow->next;
    slow->next = newNode;
    } else {
    head = new Node(data);
    head->next = head;
    }
    }
    void display() {
    if (!head) {
    cout << "List is empty" << endl;
    return;
    }
    Node* temp = head;
    do {
    cout << temp->data << " ";
    temp = temp->next;
    } while (temp != head);
    cout << endl;
    }
    void displayReverse() {
    if (!head) {
    cout << "List is empty" << endl;
    return;
    }
    Node* temp = head;
    Node* last = nullptr;
    do {
    temp = temp->next;
    } while (temp != head);
    while (temp != head) {
    cout << temp->data << " ";
    temp = temp->prev;
    }
    cout << endl;
    }
};
int main() {
    CircularLinkedList list;
    list.insertAtFirst(10);
    list.insertAtLast(20);
    list.insertAtLast(30);
    list.insertAtNth(25, 3);
    list.insertAtCenter(15);
    cout << "Circular Linked List  order: ";
    list.display();
    cout << "Circular Linked List  reverse: ";
    list.displayReverse();
    return 0;
}
THANK U SIR JI 