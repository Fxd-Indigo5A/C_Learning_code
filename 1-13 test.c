#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>







//1. print arrows

//int main()
//{
//
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < i+1; j++)
//			{
//				printf("*");
//			}
//
//			printf("\n");
//		}
//
//		for (i = 0; i < n+1; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n+ 1-i; j++)
//			{
//				printf("*");
//			}
//
//			printf("\n");
//		}
//	
//	}
//	
//	return 0;
//
//}


//2. avg score


//int main()
//{
//
//	int score = 0;
//	int sum = 0;
//	int min = 100;
//	int max = 0;
//	int count = 0;
//
//	while (scanf("%d", &score) == 1)
//	{
//		count++;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//		if (count == 7)
//		{
//			printf("%.2lf\n", (sum - min - max) / 5.0);
//			int sum = 0;
//			int min = 100;
//			int max = 0;
//			int count = 0;
//
//		}
//	
//	}
//	return 0;
//}
//


// find single number

//
//void find_single_num(int arr[], int sz, int* ps1, int* ps2)
//{
//	int ret = 0;
//	int i = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			pos = i;
//			break;
//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*ps1 ^= arr[i];
//		}
//		else
//		{
//			*ps2 ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,11,1,2,3,4,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int  single_num1 = 0;
//	int single_num2 = 0;
//	find_single_num(arr, sz, &single_num1, &single_num2);
//	printf("%d %d\n", single_num1, single_num2);
//
//	return 0;
//
//}
//


//int main()
//{
//	char arr[20] = "-111234";
//	int ret = atoi(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//swap bit

//#define SWAP_BIT(n)  ((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1)
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", SWAP_BIT(n));
//	return 0;
//}


//simulate atoi


enum Status
{
	VALID,
	INVALID
}sta=INVALID;


int my_atoi(const char* str)
{
	assert(str);
	int flag = 1;
	long long ret = 0;

	if (*str == '\n')
	{
		return 0;
	}
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (*str)
	{
		
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * ((*str) - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			str++;

		}
		else
		{
			return (int)ret;
		}
	}

	if (*str == '\0')
	{
		sta = VALID;
	}
	return (int)ret;
}

int main()
{

	char arr[20] = "886988";
	int ret = my_atoi(arr);
	if (sta == VALID)
	{
		printf("valid number:%d\n", ret);
	}
	else if (sta == INVALID)
	{
		printf("invalid number:%d\n", ret);

	}
	return 0;
}
