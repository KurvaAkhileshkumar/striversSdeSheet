#include<bits/stdc++.h>
#include "node.h"
#include "traverse.h"
#include "array2LinkedList.h"

using namespace std;

Node* oddEvenLinkedList(Node *head)
{
    Node *odd=head;
    Node *even=head->next;
    Node *evenHead=even;

    while(even!=nullptr && even->next!=nullptr)
    {
        odd->next=odd->next->next;
        even->next=even->next->next;      

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    Node* head=array2LinkedList(v);
    head=oddEvenLinkedList(head);
    traverse(head);
    return 0;
}