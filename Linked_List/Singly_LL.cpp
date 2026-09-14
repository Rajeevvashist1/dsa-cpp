#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtBeginning(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtEnding(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, int pos, int d)
{
    int cnt = 1;

    if (pos == 1)
    {
        InsertAtBeginning(head, d);
        return;
    }

    Node *NodeToInsert = new Node(d);

    Node *temp = head;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (!(temp->data))
    {
        cout << "Position Not found" << endl;
        return;
    }

    if (temp->next == NULL)
    {
        temp->next = NodeToInsert;
        return;
    }

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void DeletionFromhead(Node *&head)
{
    head = head->next;
}

void DeleteFromEnd(Node* &head , Node* &tail){
    Node* temp = null
}
void Print(Node *&head)
{
    Node *temp = head;

    cout << "Printing The LL : " << endl;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main()
{
    Node *Node1 = new Node(10);

    Node *head = Node1;
    Node *tail = Node1;

    //  Insert At Beginning ->>

    // InsertAtBeginning(head, 20);
    // InsertAtBeginning(head, 30);
    // InsertAtBeginning(head, 40);

    // Print(head);

    //  Insert At Ending ->>

    InsertAtEnding(tail , 20);
    InsertAtEnding(tail , 30);
    InsertAtEnding(tail , 40);

    Print(head);

    cout<<endl;

    //  Insert At Position ->>

    // InsertAtPosition(head , 1 , 5);
    // InsertAtPosition(head , 3 , 15);
    // // InsertAtPosition(head , 354 , 15); /?????????????????????????????????

    // Print(head);

    DeletionFromhead(head);
    Print(head);
}