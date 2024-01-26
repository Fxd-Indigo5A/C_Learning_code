#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 1. Loop
//void reverse(char arr[])
//{
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//
//}


// 2. recursion


//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//// version 1
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//
//
//int main()
//{
//	char arr[] = "abc";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//
//void reverse(char arr[] , int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdefghijk";
//	int left = 0;
//	int sz = my_strlen(arr);
//	int right = sz - 1;
//	reverse(arr,left, right);
//	printf("%s\n", arr);
//	return 0;
//}



//int digit_sum(unsigned int n)
//{
//	
//	if (n > 9)
//	{
//		return digit_sum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned n = 0;
//	scanf("%u", &n);
//	int ret = digit_sum(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//double power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * power(n ,k-1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return 1.0 / power(n, -k);
//	}
//}
//
//int main()
//{
//
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf", ret);
//	return 0;
//
//}

//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
//}



void init_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}

}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init_arr(arr, sz);
	print(arr, sz);

	return 0;
}
