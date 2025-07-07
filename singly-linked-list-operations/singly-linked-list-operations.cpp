// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    cout << "Printing linked list:" << endl;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void insert_at_any_pos(Node *&head, int value, int pos)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    int i = 0;
    while (i < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void linkedlist_reverse_printing(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    linkedlist_reverse_printing(temp->next);
    cout << temp->val << " ";
}

void delete_head(Node *&head)
{
    Node* deleteNode=head;
    head = head->next;
    delete deleteNode;
}

void delete_at_any_position(Node* head,int index){
    Node* temp=head;
    for(int i=1; i<index; i++){
        temp=temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

void delete_at_tail(Node* head,Node* &tail){

}

void sort_linkedlist(Node* head){
    // selection sort
    for(Node* i =head; i->next!=NULL; i=i->next ){
        for(Node* j =i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter values(if value is -1 it will stop taking input): " << endl;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);
    cout << endl;

    // cout << "Linked list reverse printing:" << endl;
    // linkedlist_reverse_printing(head);
    // cout << endl;

    // cout<<"Deleting head:"<<endl;
    // delete_head(head);
    // print_linked_list(head);
    // cout<<endl;
    // cout<<"Insert Delete node index:";
    // int index;
    // cin>>index;
    // cout<<"After deleting at index "<<index;
    // delete_at_any_position(head,index);
    // print_linked_list(head);

    cout<<"After sorting:"<<endl;
    sort_linkedlist(head);
    print_linked_list(head);

    return 0;
}
