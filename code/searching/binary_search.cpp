#include <bits/stdc++.h>
using namespace std;

void binaryser(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            cout << "Value present at index: " << mid;
            return;
        }

        else if (arr[mid] < x)

            low = mid + 1;

        else
            high = mid - 1;
    }
    cout << -1;
}

int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    int n;
    cout << "Enter length of an array: ";
    cin >> n;
    cout << "Enter array elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter value to find: ";
    cin >> x;
    binaryser(arr, n, x);
    return 0;
}