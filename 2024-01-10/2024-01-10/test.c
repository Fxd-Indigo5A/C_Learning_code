#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>

// 1. big endian or little endian

// version 2

//int check_endian()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//
//
//	int ret = check_endian();
//	if (ret == 1)
//	{
//		printf("Little endian\n");
//	}
//	else
//	{
//		printf("Big endian.\n");
//	}
//	return 0;
//
//}
// 2.the greatest common dividor and least common multiple

int main()
{
	int m = 0;
	int n = 0;
	while (scanf("%d %d", &m, &n) == 2)
	{
		int num1 = m;
		int num2 = n;
		int ret = 0;
		while (ret = num1 % num2)
		{
			num1 = num2;
			num2 = ret;
		}
		printf("%d\n", num2 + m * n / num2);
	}
	return 0;
}

// 3.  Printing hollow squares


int main()
{

	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}

	return 0;

}
