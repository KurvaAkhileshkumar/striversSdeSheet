#include<bits/stdc++.h>
#include "node.h"
#include "traverse.h"
#include "array2LinkedList.h"

using namespace std;

Node* sort012(Node *head)
{
    if(head==nullptr || head->next==nullptr)
    return head;

    Node *zeroHead=new Node(-1);
    Node *oneHead=new Node(-1);
    Node *twoHead=new Node(-1);

    Node *zero=zeroHead;
    Node *one=oneHead;
    Node *two=twoHead;

    Node *temp=head;

    while(temp)
    {
        if(temp->data==0)
        {
            Node *nn=new Node(0);
            zero->next=nn;
            zero=nn;        
        }
        else if(temp->data==1)
        {
            Node *nn=new Node(1);
            one->next=nn;
            one=nn;
        }
        else if(temp->data==2)
        {
            Node *nn=new Node(2);
            two->next=nn;
            two=nn;
        }
        temp=temp->next;
    }
    if(oneHead->next==nullptr)
    {
        zero->next=twoHead->next;
    }
    else
    {
        zero->next=oneHead->next;
    }
    one->next=twoHead->next;

    return zeroHead->next;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    Node *head=array2LinkedList(v);    
    Node *sortHead=sort012(head);
    traverse(sortHead);
    return 0;
}