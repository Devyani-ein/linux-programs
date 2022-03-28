#include<stdio.h>
#include<unistd.h>

int main(){
	printf("max fds: %d\n",gettablesize());
	exit(0);
}
