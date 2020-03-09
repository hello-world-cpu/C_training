#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *wait()
{
	sleep(2);
	printf("Done.\n");
	return NULL;
}

int main(void)
{
	pthread_t thread;
	int err;

	err=pthread_create(&thread, NULL, wait, NULL);

	if (err)
	{
		printf("An error occured: %d\n", err);
	}

	printf("Waiting for the thread to end...\n");
	pthread_join(thread, NULL);
	printf("Thread ended.\n");

	return 0;
}
