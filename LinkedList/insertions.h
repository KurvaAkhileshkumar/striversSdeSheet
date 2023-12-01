using namespace std;
Node* insertionAtHead(Node *head,int ele)
{
    cout<<"Linked List after insertion at head\n";
    Node *nn=new Node(ele);
    nn->next=head;
    return nn;
}

void insertionAtTail(Node *head,int ele)
{
    cout<<"Linked List after insertion at tail\n";
    Node *nn=new Node(ele);
    Node *temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=nn;

}

Node* insertionAtPostion(Node *head,int ele,int pos)
{
    cout<<"Linked List after inserting an element at position\n";
    Node *nn=new Node(ele);
    Node* temp=head;
    if(pos==1)
    {
        nn->next=head;
        return nn;
    }
    int cnt=1;
    while(temp->next)
    {
        cnt++;
        if(cnt==pos)
        {
            nn->next=temp->next;
            temp->next=nn;
        }
        temp=temp->next;
    }
    return head;
}