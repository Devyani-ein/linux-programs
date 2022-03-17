#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *PrintHello(void *threadid)
{
	printf("\nHello World!\n");
   while(1);

}

int main()
{
	pthread_t thread;
	int rc,t=0;
	printf("Creating thread\n");
	rc=pthread_create(&thread,NULL,PrintHello,NULL);
	printf("\n Thread ID:%u",thread);
	sleep(6);
	t=pthread_cancel(thread);	
	if(t==0)
		printf("\ncancel thread");
	printf("\nthread ID:%u\n",thread);	
}
