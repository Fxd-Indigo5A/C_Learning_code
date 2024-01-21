#define _CRT_SECURE_NO_WARNINGS
#include<stddef.h>
#include<stdio.h>

//using macro to simulate offsetof 



struct S
{
	char c1;
	int i;
	char c2;
};


#define OFFSETOF(type,member)   (size_t)&(((type*)0)->member )

int main()
{
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));


	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));

	return 0;
}


