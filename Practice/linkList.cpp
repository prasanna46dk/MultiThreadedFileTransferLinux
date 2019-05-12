#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct node {
    int data;
    struct node *next;
}Node;

Node *createList(Node *head, int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    Node *temp = head;
    node->data = data;
    node->next = NULL;
    if (!head)
        return node;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = node;
    return head;
}

void printList(Node *head)
{
    if (!head)
        return;
    cout << head->data << "-> ";
    printList(head->next);
}

Node *reverseList(Node *head)
{
    if (!head || !head->next)
        return head;
    node *secondElem = head->next;
    head->next = NULL;
    node *reverseRest = reverseList(secondElem);
    secondElem->next = head;
    return reverseRest;
}

Node *reverseIterative(Node *head)
{
    Node *prev = NULL, *next;
    while(head) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

int main ()
{
    Node *node = NULL;
    for(int i=0; i<10; i++)
        node = createList(node, i);
    printList(node);
    cout << endl;
    node = reverseList(node);
    printList(node);
    cout << endl;
    node = reverseIterative(node);
    printList(node);
    cout << endl;
    return 0;
}
