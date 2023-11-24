#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *insert_beg(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

node *insert_any(node *head, int pos, int val)
{
    node *temp = new node(val);

    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    node *curr = head;
    for (int i = 1; i < pos - 1; i++)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return temp;
}

void print(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{

    node *head = NULL;
    head = insert_beg(head, 1);
    head = insert_beg(head, 2);
    head = insert_beg(head, 3);
    head = insert_beg(head, 4);
    head = insert_beg(head, 5);

    int x, value;
    cin >> x >> value;
    head = insert_any(head, x, value);
    print(head);
    return 0;
}