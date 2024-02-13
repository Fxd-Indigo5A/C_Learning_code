#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

// Fibonacci


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n-1) + fib(n - 2);
//	}
//}
//
//



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d\n", m);
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// version1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//
//	printf("%d\n", max - min);
//
//	return 0;
//
//}

//version 2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	
//
//	printf("%d\n", max - min);
//
//	return 0;
//
//}

//version 3

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//
//
//	printf("%d\n", max - min);
//	return 0;
//	
//}

//
//int main()
//{
//	char ch = '0';
//	while (scanf("%c", &ch) ==1)
//	{
//		
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	
//	while (scanf("%c", &ch) )
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("%c is an alphabet!\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet!\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	
//	{
//		scanf("%d", &score);
//		if (score > max)
//		{
//			max = score;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int e = (int)pow(10, j);
//			sum += (i / e) * (i % e);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//	return 0;
//}


//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abchhffuigudef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}

// version1
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


// version 2
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0;i<32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//// version3
//
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_num_of_1(num);
//	printf("%d\n", ret);
//	return 0;
//}


// version 1
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if( ((m >> i) & 1) != ((n >> i) & 1))
//		count++;
//	}
//	return count;
//}






// version 2
//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//
//}

//10
//00000000 00000000 00000000 00001010

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//odd bit
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i)&1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (num >> i)&1);
//	}
//	return 0;
//}

//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n-1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int is_leap_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
}


int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while ((scanf("%d%d", &y, &m)) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m==2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;

}
