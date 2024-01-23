#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>



// 1. who's killer
//int main()
//{
//
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//2. Yang Hui Triangle

//int main()
//{
//
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i>=2 && j >=1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{ 
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 3.left_rotate_str---version 1
//
//void left_rotate_str(char arr[], int k)
//{
//
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//	 
//}
//
//int main()
//{
//
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate_str(arr, k);
//	printf("%s\n", arr);
//	return 0;
//
//}

// 4.left_rotate_str---version 2

//void my_reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//
//void left_rotate2_str(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	my_reverse(arr, arr + k - 1);
//	my_reverse(arr + k, arr + len - 1);
//	my_reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate2_str(arr, k);
//	printf("%s\n", arr);
//	return 0;
//
//}


// 5. Whether a number is in a matrix

//int find_num(int arr[3][3], int r, int c, int k,int* a, int* b )
//{
//	int x = 0;
//	int y = c-1;
//	while (y>=0 && x <= r-1)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*a = x;
//			*b = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int a = -1;
//	int b = -1;
//	int ret = find_num(arr, 3,3, k, &a, &b);
//	if (ret == 1)
//	{
//		printf("Yes! The coordinate is %d %d\n",a,b);
//
//	}
//	else
//	{
//		printf("not in the matrix.\n");
//	}
//
//
//
//	
//	return 0;
//
//}

//6.
// Whether the string is left-rotated---version1


//int whether_rotated(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = whether_rotated(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes.\n");
//	}
//	else
//	{
//		printf("No.\n");
//	}
//	return 0;
//
//}


//7.
// Whether the string is left-rotated.---version2
//
//
//int whether_rotated(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcd";
//	int ret = whether_rotated(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes.\n");
//	}
//	else
//	{
//		printf("No.\n");
//	}
//	return 0;
//
//}

// 8.matrix transposition
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//		printf("%d ",arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//9.Upper triangular matrix determination
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//	end:
//
//	if (flag == 1)
//	{
//		printf("Yes\n");
//
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//10.  whether it is sorted

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0; 
//	int flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if (arr[i] < arr[i - 1])
//			{
//				flag2 = 1;
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//
//	if (flag1 + flag2 <= 1)
//	{
//		printf("sorted!\n");
//	}
//	else
//	{
//		printf("unsorted!\n");
//	}
//	return 0;
//}

