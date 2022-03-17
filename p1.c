#include<stdio.h>
void main()
{
int a=10;
int *p,**q;
p=&a;
q=&p;
printf("value of a is %d\n",a);
printf("Address of a is %p\n",p);
printf("value of a is %d\n", *p);
printf("value of a is %d\n", **q);


}
