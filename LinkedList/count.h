using namespace std;

int count(Node *head)
{
    int cnt=0;
    while(head)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}