#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




//1. adjust_odd_even number
//
//void adjust_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// input
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//
//	}
//	// adjustment
//
//	adjust_odd_even(arr, sz);
//
//	// output
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
 

//2. ordered sequence merging

int  main()
{

	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[1001] = { 0 };
	int arr2[1001] = { 0 };
	int arr3[2001] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1 + i);
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d", arr2 + i);
	}
	int j = 0;
	int k = 0;
	int l = 0;

	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			arr3[l++] = arr1[j];
			j++;
		}
		else
		{
			arr3[l++] = arr2[k];
			k++;
		}
	}

	if (j < n)

	{
		for (; j < n; j++)
		{
			arr3[l++] = arr1[j];
		}
		
	}
	else
	{
		for (; k < m; k++)
		{
			arr3[l++] = arr2[k];
		}
	}

	for (i = 0; i < m + n; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}