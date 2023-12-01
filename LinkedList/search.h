using namespace std;
string searchAnElement(Node *head,int key)
{
    cout<<"Searching element "<<key<<" in the Linked List\n";
    while(head)
    {
        if(head->data==key)
        return "Found in the Linked List";
        head=head->next;
    }
    return "Not Found in the Linked List";
}