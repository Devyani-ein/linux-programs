#include<stdio.h>
#include<fcntl.h>

int main(){
	int fd1,fd2,fd3;
	//umask(0);
	
	fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);//3

	fd3=fcntl(fd1, F_DUPFD,565);//4used

	printf("duplicate value of fd1 in fd3=%d\n");

/*	printf("fd1=%d\n",fd1);//3
	printf("fd2=%d\n",fd2);//4
	fd3=dup(fd1);
	
	printf("fd3_dup of fd1=%d\n",fd3);
*/
	close(fd3);
	close(fd1);
	return 0;
}
