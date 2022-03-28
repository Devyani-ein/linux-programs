#include<stdio.h>
#include<unistd.h>

int main(){

	printf("current process\n");

	fork();
	
	fork();
	fork();
	printf("LINUX process22\n");
	printf("LINUX process33\n");
	
	while(1);//parent wait state
		//child wait state

	return 0;
}
