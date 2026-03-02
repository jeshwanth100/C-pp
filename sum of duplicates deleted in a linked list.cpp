#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int removeDuplicates() {
    Node *ptr1, *ptr2, *dup;
    int sum = 0;

    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next) {
        ptr2 = ptr1;
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                sum += dup->data;
                ptr2->next = dup->next;
                delete dup;
            } else {
                ptr2 = ptr2->next;
            }
        }
    }
    return sum;
}

int main() {
    insert(10);
    insert(20);
    insert(10);
    insert(30);
    insert(20);

    int sum = removeDuplicates();
    cout << "Sum of deleted duplicates: " << sum;
    return 0;
}
