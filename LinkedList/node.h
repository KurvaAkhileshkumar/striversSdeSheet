class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data,Node *next)
    {
        this->data=data;
        this->next=nullptr;
    }
    public:
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
