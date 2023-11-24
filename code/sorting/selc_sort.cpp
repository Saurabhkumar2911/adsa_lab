#include <bits/stdc++.h>
using namespace std;

void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int a[], int n)
{
    int temp, min;
    for (int i = 0; i < n; i++)
    {
        min = a[i];
        for (int j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                temp = min;
                min = a[j];
                a[j] = temp;
            }
        }
        a[i] = min;
    }
}
int main()
{
    cout << "Name: Saurabh Kumar \nUID: 23MAI10004\n";
    int n;
    cout << "Enter the Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Array after Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
