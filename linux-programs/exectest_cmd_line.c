#include<stdio.h>

int main(int argc,char *argv[])
{
	int i;
	printf("\n File name : %s\n",argv[0]);//a.out
	printf("\n Total number of arguments: %d",argc);
	printf("\nArguments Passed: ");
	for(i=1;i<argc;i++)
		printf("%s",argv[i]);
	printf("\n");
}
