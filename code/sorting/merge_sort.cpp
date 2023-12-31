#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int left = mid - l + 1;
    int right = r - mid;

    int a[left];
    int b[right];

    for (int i = 0; i < left; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < right; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < left && j < right)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < left)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < right)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void Mergesort(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        Mergesort(arr, l, mid);
        Mergesort(arr, mid + 1, r);
        Merge(arr, l, mid, r);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    cout << "Merge Sort\n";
    int n;
    cout << "Enter Size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting: ";
    print(arr, n);
    Mergesort(arr, 0, n - 1);
    cout << "\nArray after sorting : ";
    print(arr, n);
    return 0;
}