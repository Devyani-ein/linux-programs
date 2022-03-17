#include<stdio.h>
#include<fcntl.h>

int main(){
	int fd1,fd2,fd3,fd4;
	//umask(0);
	
	fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);//3
	fd2=open("linuxnew.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);//4used

	printf("fd1=%d\n",fd1);//3
	printf("fd2=%d\n",fd2);//4
	fd3=dup(fd1);
	
	printf("fd3_dup of fd1=%d\n",fd3);

	close(fd3);
	close(fd2);
	close(fd1);
	return 0;
}
