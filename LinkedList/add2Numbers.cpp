#include<bits/stdc++.h>
#include "node.h"
#include "array2LinkedList.h"
#include "traverse.h"

using namespace std;

Node* add2Numbers(Node* head1,Node* head2)
{
    int c=0;
    Node *temp1=head1;
    Node *temp2=head2;
    Node *ans=new Node(-1);
    Node *temp=ans;
    while(temp1!=nullptr || temp2!=nullptr)
    {
        int sum=c;

        if(temp1)
        {
            sum=sum+(temp1->data)%10;           
            temp1=temp1->next;
        }
        if(temp2)
        {
            sum=sum+(temp2->data)%10;
            temp2=temp2->next;            
        }
        c=sum/10;
        
        Node *nn=new Node(sum%10);
        temp->next=nn;
        temp=nn;        
    }
    if(c)
    {
        Node *n2=new Node(c);
        temp->next=n2;
    }
    return ans->next;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int m;
    cin>>m;
    vector<int> v1(m);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    Node *list1=array2LinkedList(v);
    Node *list2=array2LinkedList(v1);

    Node *ans=add2Numbers(list1,list2);
    traverse(ans);
    return 0;
}