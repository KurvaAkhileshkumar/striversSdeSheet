#include<bits/stdc++.h>
#include "node.h"
#include "traverse.h"
#include "array2LinkedList.h"

using namespace std;

void removeNthNode(Node *head,int pos)
{
    Node *temp=head;
    while(pos)
    {
        pos--;
        temp=temp->next;
    }
    Node *newTemp=head;
    while(temp->next)
    {
        newTemp=newTemp->next;
        temp=temp->next;
    }
    newTemp->next=newTemp->next->next;    
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int pos;
    cin>>pos;
    Node *head=array2LinkedList(v);
    removeNthNode(head,pos);
    traverse(head);
    return 0;
}