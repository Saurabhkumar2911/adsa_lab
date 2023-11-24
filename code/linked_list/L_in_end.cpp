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

node *insert_end(node *head, int x)
{
    node *temp = new node(x);

    if (head == NULL)
    {
        return temp;
    }

    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
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
    int n, value;
    cin >> n;

    node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        head = insert_end(head, value);
    }
    print(head);

    return 0;
}