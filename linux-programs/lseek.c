#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd,len;
	char write_buf[50]="hi,how are you?, wow?";
	char read_buf[50];

	fd = open("linux_kernel1.txt",O_CREAT|O_RDWR,777);//CFO
	
	len=write(fd,write_buf,50);//50 return,curr file off mved 50th loctn

	printf("return value from write optn=%d\n",len);//50
	//close(fd1);

	lseek(fd,4,SEEK_SET);

	read(fd,read_buf,len);

	printf("data from buffer(read optn)=%s\n",read_buf);//garbage;

	close(fd);

	return 0;
}

