#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>



// simulating  string functions:

// 1. simulating  strlen
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "abcdefffff";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//
//}



//2. simulating strcpy

//char*  my_strcpy (char* des, const char* src)
//
//{
//	assert(des && src);
//	char* ret = des;
//	while (*des++ = *src++)
//	{
//		;
//	}
//	
//	return ret;
//}
//
//
//int main()
//{
//
//	char arr1[] = "abcdeffffff";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
// }
//
//
//


//  3. simulating strcat

//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.Find '\0' at the end of target space
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. adding 
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "wwwwworld");
//	printf("%s\n", arr);
//	return 0;
//}
// simulating strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//
//	char arr1[] = "abd";
//	char arr2[] = "abd";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[49] = "abc";
//	char arr2[] = "hel";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//
//}


// 4. simulating strstr

//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;	
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbbbbcdef";
//	char substr[] = "bbc";
//	char* ret = my_strstr(arr1, substr);
//	if (ret == NULL)
//	{
//		printf("can't find str\n");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	char email[] = "vnunvianvivo@bslmbkbklb.com";
//	char cp[40] = { 0 };
//	strcpy(cp, email);
//	char sep[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok(cp, sep);
//		ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
  //5. simulating memcpy

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

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[40] = { 0 };
	my_memcpy(arr2, arr1, 32);
	int i = 0;
	for (i =0;i<8;i++)
		{
			printf("%d ",arr2[i]);
		}
	return 0;
}
