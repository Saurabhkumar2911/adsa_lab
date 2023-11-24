#include <bits/stdc++.h>
using namespace std;

void swapping(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int start, int end)
{
	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i] <= pivot)
			count++;
	}

	int pivotIndex = start + count;
	swapping(arr[pivotIndex], arr[start]);

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex)
	{

		while (arr[i] <= pivot)
		{
			i++;
		}

		while (arr[j] > pivot)
		{
			j--;
		}

		if (i < pivotIndex && j > pivotIndex)
		{
			swapping(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;

	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
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
	cout << "Quick Sort\n";
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
	quickSort(arr, 0, n - 1);
	cout << "\nArray after sorting : ";
	print(arr, n);
	return 0;
}
