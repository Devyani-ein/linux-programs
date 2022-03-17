#include<stdio.h>
#include<unistd.h>

int main(){
	printf("My process pid=%d\n",getpid());//current process pid
	printf("my parent pid=%d\n",getppid());

	printf("linux kernel\n");

	while(1);
	return 0;
}



