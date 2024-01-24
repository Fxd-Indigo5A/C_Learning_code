#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


// 1.simulating  my_memcpy

void* my_memcpy(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;

}

// 2.simulating my_memmove



void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	// copy from front to back
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	// copy from back to front
	else
	{
		while (num--)
		{
			*((char*)dest + (num)) = *((char*)src + (num));
		}
		
	}

	return dest;
	
}

void test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[40] = { 0 };
	my_memcpy(arr2, arr1, 32);
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr2[i]);
	}

}


void test2()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	memmove(arr1+2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

}

void test3()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

}


void test4()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1+4, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

}


int main()
{
	// test1()
	test2();
	// test4();
	return 0;
}


