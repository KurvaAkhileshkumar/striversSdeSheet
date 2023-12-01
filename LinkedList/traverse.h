using namespace std;
void traverse(Node *head)
{
    cout<<"Traversing the linked List\n";
    while(head)
    {
        cout<<head->data;
        if(head->next)
        cout<<"->";
        head=head->next;
    }
    cout<<"\n";
}