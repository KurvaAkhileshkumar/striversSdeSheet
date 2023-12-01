#include<bits/stdc++.h>
#include "node.h"
#include "array2LinkedList.h"
#include "traverse.h"

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
    return 0;
}