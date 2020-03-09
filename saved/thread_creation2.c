#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

//a normal C function that is executed as a thread 
//when its name is specified in pthread_create():
void *myThreadFun(void *vargp)
{
	sleep(3);
	printf("Hello from Thread!\n");
	return NULL;
}

int main(int argc, char const *argv[])
{
	pthread_t thread_id;
	printf("Before Thread\n");
	pthread_create(&thread_id, NULL, myThreadFun, NULL);
	printf("Before join\n");
	pthread_join(thread_id, NULL);
	printf("After Thread\n");

	return 0;
}