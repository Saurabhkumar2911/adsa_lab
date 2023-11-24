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

node *insert(node *head, int x)
{
    node *temp = new node(x);

    if (head == NULL)
        return temp;

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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    cout << "Enter size and Enter value";
    int n, value;
    cin >> n;
    node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        head = insert(head, value);
    }
    print(head);

    return 0;
}