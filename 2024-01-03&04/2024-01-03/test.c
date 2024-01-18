#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<math.h>


//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


// simulating strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//	
//}
//
//
//int main()
//{
//	char arr1[] = "XXXXXXXXXXXXX";
//	char arr2[] = "hello bit!";
//	
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	char arr[] = "hello bit!!!";
//	int num = my_strlen(arr);
//	printf("%d\n", num);
//	return 0;
//
//}

//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a+b>c) && (a+c>b) && (b+c)>a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && b != c) || (a == c && c != b) || (b == c && a != b))
//			{
//				printf("Isosceles triangle!\n");
//				
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//	
//}
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//
//}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//
//int main()
//{
//
//	char arr[10001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//
//}


//int main()
//{
//
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp%10)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//

//}

//
//int main()
//{
//
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		
//
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}

//
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	while (empty / 2 >= 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//}


//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-i-1) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%2d\n", i++);
//
//	} while (i--);
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", i * a);
//
//}


//void  reverse(char* left, char* right)
//{
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
//int main()
//{
//
//	char arr[101] = { 0 };
//	gets(arr);
//	char* left = arr;
//	int len = strlen(arr);
//	char* right = &arr[len-1];
//	reverse(left, right);
//	
//	char* start = arr;
//
//	while (*start)
//	{
//		char* end = start;
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//			end++;
//
//		}
//		start = end;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//
//}

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//			end++;
//		}
//		start = end;
//	}
//
//
//
//	printf("%s\n", arr);
//	
//	return 0;
//}

//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <=12 ; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

int check_sys()
{
	int a = 1;
	return *(char*)&a;
	
}

int main()
{


	int ret = check_sys();
	if (ret == 1)
	{
		printf("little end\n");
	}
	else
	{
		printf("big end\n");
	}
	
	return 0;

}
