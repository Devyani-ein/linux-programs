#include<stdio.h>

void random(int *,int *);

void main()
{
int a=10,b=20;
printf("before call: a=%d b=%d\n",a,b);
random(&a,&b);
printf("after call: a=%d b=%d\n",a,b);
}
void random(int *a,int *b)
{
*a=12;
*b=13;
}
