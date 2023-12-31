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
        head = insert_beg(head, value);
    }

    print(head);
    return 0;
}