#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int position, value;
    for (int i = 1; i < n; i++)
    {
        value = arr[i];
        position = i - 1;
        while (position >= 0 && arr[position] > value)
        {
            arr[position + 1] = arr[position];
            position--;
        }
        arr[position + 1] = value;
    }
}
int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    int n;
    cout << "        Insertion Sort: \n";
    cout << "Enter the Size: ";

    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    cout << "Array after Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
