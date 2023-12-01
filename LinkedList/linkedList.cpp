#include<bits/stdc++.h>
#include "node.h"
#include "insertions.h"
#include "deletions.h"
#include "traverse.h"
#include "array2LinkedList.h"
#include "count.h"
#include "search.h"

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    Node *head=array2LinkedList(v);
    traverse(head);    
    cout<<"No of nodes in the Linked List "<<count(head)<<"\n";
    string isFound=searchAnElement(head,15);
    cout<<isFound<<"\n";
    head=deleteHead(head);
    cout<<"Linked List after deletion of head\n";
    traverse(head);
    deleteTail(head);
    traverse(head);    
    head=deletionByPosition(head,3);
    traverse(head);
    head=deletionByValue(head,5);
    traverse(head); 
    head=insertionAtHead(head,100);
    traverse(head);   
    head=insertionAtPostion(head,20,3);
    traverse(head);      
    insertionAtTail(head,200);
    traverse(head);
    return 0;
}