#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    cout << "Enter the values: \n";
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;

    cout << "Enter value to find: \n";
    cin >> x;

    int ans = search(arr, n, x);

    if (ans == -1)
        cout << "Element not found";
    else
        cout << "value presant at: " << ans;

    return 0;
}
