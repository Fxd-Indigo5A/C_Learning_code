
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>








//The minimum number of steps becomes a Fibonacci number.




//int minimum_step(int n)
//{
//	
//	int a = 0;
//	int b = 1;
//	int tmp = 0;
//	if (n == b)
//		{
//			return 0;
//		}
//	while (n > b)
//	{
//		tmp = a + b;
//		a = b;
//		b = tmp;
//
//	}
//	return ((n - a) > (b - n) ? (b - n) : (n - a));
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = minimum_step(n);
//	printf("%d\n", ret);
//
//	
//	return 0;
//
//}
s

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	while (1)
//	{
//		if (n == b)
//		{
//			printf("0\n");
//			break;
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) > abs(b - n))
//			{
//				printf("%d\n", abs(b - n));
//			}
//			else
//			{
//				printf("%d\n", abs(a - n));
//
//			}
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}



// version 1_mine 


void replace_space( char* str, int sz)

{
	char* cur = str;
	assert(str);
	int space_num = 0;
	while (*cur)
	{
		if (*cur == ' ')
		{
			space_num++;
		}
		cur++;

	}
	char* end1 = str + sz - 1;
	char* end2 = str + sz + space_num * 2 - 1;
	while (end1 != end2)
	{
		*end2-- = *end1--;

		if (*end1 == ' ')
		{
			end1--;
			*end2-- = '0';
			*end2-- = '2';
			*end2-- = '%';

		}

	}
}

int main()
{

	char arr[30] = "We are happy.";
	int sz = (int)strlen(arr);
	//printf("%d\n", sz);
	replace_space(arr, sz);
	printf("%s\n", arr);
	return 0;
}



// version 2
//void replace_space(char* str, int sz)
//
//{
//	char* cur = str;
//	//assert(str);
//	int space_num = 0;
//	while (*cur)
//	{
//		if (*cur == ' ')
//		{
//			space_num++;
//		}
//		cur++;
//
//	}
//	int end1 = sz - 1;
//	int end2 = sz + space_num * 2 - 1;
//	while (end1 != end2)
//	{
//		if (str[end1] != ' ')
//		{
//			str[end2--] = str[end1--];
//
//		}
//		
//		else
//		{
//			end1--;
//			str[end2--] = '0';
//			str[end2--] = '2';
//			str[end2--] = '%';
//
//		}
//
//	}
//}
//
//int main()
//{
//
//	char arr[30] = "We are happy.";
//	int sz = (int)strlen(arr);
//	//printf("%d\n", sz);
//	replace_space(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
