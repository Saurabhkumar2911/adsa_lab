#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

// Print an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    cout << "\nHeap Sort\n";
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
    heapSort(arr, n);
    cout << "Array after sorting : ";
    print(arr, n);
    return 0;

    return 0;
}