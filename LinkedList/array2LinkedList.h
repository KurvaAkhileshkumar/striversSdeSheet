#include <bits/stdc++.h>

using namespace std;

Node* array2LinkedList(vector<int> v)
{
    int n=v.size();    
    Node *mover=nullptr;
    Node *nn=new Node(v[0]);    
    mover=nn;
    for(int i=1;i<n;i++)
    {
        Node *temp=new Node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return nn;
}