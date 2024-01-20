#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//1. Sorting integers with qsort


int cmp_int(const void* e1, const void* e2)
{
	return (*((int*)e2)) - (*((int*)e1));
}

//int_comapring
void test1()
{
	int arr[] = { 11,72,32,1,5,8,9,3,6,10,90};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

// 2. Sorting struct_name&age  with qsort


struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age- ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu s[] = { {"ZhangSan",15},{"LiSi", 30},{"WangWu", 25}};
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}
	

}

// 4. My bubbling sort


void Swap(char* buff1, char* buff2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buff1;
		*buff1 = *buff2;
		*buff2 = tmp;
		buff1++;
		buff2++;
	}
}

void bubbling_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp( (char*)base+j*width,(char*)base+(j+1)*width)>0)
			Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			flag = 0;
		}
		if (flag == 1)
		{
			break;
		}
	}
}


// test_my_bubbling

void test4()
{
	int arr[] = { 11,72,32,1,5,8,9,3,6,10,90 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbling_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}



void test5()
{
	struct Stu s[] = { {"ZhangSan",18},{"LiSi", 30},{"WangWu", 26} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubbling_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//bubbling_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}


}


int main()
{
	// test1();
	//test2();
	// test4();
	test5();
	return 0;
}
