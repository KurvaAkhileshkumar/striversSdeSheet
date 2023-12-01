using namespace std;
Node* deleteHead(Node *head)
{
    return head->next;
}

void deleteTail(Node *head)
{
    cout<<"Linked List after deletion of Tail\n";
    while(head)
    {
        if(head->next->next==nullptr)
        head->next=nullptr;

        head=head->next;
    }
}
Node* deletionByPosition(Node *head,int pos)
{
    cout<<"Linked List after deletion of Node by Position\n";
    if(pos==1)
    {
        head=head->next;
        return head;
    }
    int cnt=0;
    Node *prev=head;
    Node *temp=head;
    while(temp)
    {
        cnt++;
        if(cnt==pos)
        {
            if(prev)
            prev->next=temp->next;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deletionByValue(Node* head,int val)
{
    cout<<"Linked List after deletion of node by Value\n";
    if(head->data==val)
    {
        head=head->next;  
        return head;  
    }
    Node *prev=head;
    Node *temp=head;
    while(temp)
    {
        if(temp->data==val)
        {
            if(prev)
            prev->next=temp->next;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}