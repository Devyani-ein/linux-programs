#include<stdio.h>
#include<unistd.h>

int main(){
	int pid_1;

	//pid_t fork(void);
	
	printf("Current process pid=%d\n",getpid());

	pid_1=fork();//child id sent parent
			//0 return child pro
			//
	
	if(pid_1==0){
		//sleep5
	
		printf("new child process pid=%d\n",getpid());
		printf("new child parent process ppid=%d\n",getppid());
	}
	else{
		sleep(3);
		printf("parent pricess pid=%d\n",getpid());
		printf("parents parent ppid=%d\n",getppid());
	 }
	while(1);
	return 0
}
