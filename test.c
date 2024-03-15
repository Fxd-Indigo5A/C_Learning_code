#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>

int add(intx, int y)
{
  return x+y;
}
int main()
{
  int a  = 10;
  int b = 20;
  int  ret = add(a, b);
  return 0;
}
