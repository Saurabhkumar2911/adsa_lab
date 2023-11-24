#include <bits/stdc++.h>
using namespace std;

void shellSort(int arr[], int n)
{
    int gap = n / 2;
    while (gap > 0)
    {
        for (int i = gap; i < n; i++)
        {
            int current = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > current)
            {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = current;
        }
        gap /= 2;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    cout << "\nShell Sort\n";
    int n;
    cout << "Enter Size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray before sorting: ";
    print(arr, n);
    shellSort(arr, n);
    cout << "Array after sorting : ";
    print(arr, n);
    return 0;

    return 0;
}