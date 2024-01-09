#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>


// 1.number_change
//int main()
//{
//
//	int num = 0;
//	int sum = 0;
//	int i = 0;
//
//	scanf("%d", &num);
//	while (num)
//	{
//		int ret = num % 10;
//		if (ret % 2 == 1)
//		{
//			ret = 1;
//		}
//		else
//		{
//			ret = 0;
//		}
//		sum += ret * pow(10, i++);
//		num /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}

//  2.print triangle 

//int main()
//{
//
//	int num = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j < num; j++)
//			{
//				if (i + j < num - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

// 3. calculating price 

//int main()
//{
//
//	double price = 0.0;
//	int month = 0;
//	int day = 0;
//	int coupon = 0;
//	scanf("%lf %d %d %d", &price, &month, &day, &coupon);
//	if (month == 11 && day == 11)
//	{
//		price = price * 0.7 - coupon * 50;
//	}
//	else if (month == 12 && day == 12)
//	{
//		price = price * 0.8 - coupon * 50;
//	}
//	else
//	{
//		price = price;
//	}
//	if (price < 0)
//	{
//		printf("%.2lf\n", 0);
//	}
//	else
//	{
//		printf("%.2lf\n", price);
//	}
//	
//	return 0;
//
//}


//4.competition ranking

//int main()
//{
//
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)==1)&&
//							((b == 2) + (e == 4) == 1)&&
//							((c == 1) + (d == 2) == 1)&&
//							((c == 5) + (d == 3) == 1)&&
//							((e == 4) + (a == 1) == 1)
//							)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//
//}



