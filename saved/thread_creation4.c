#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>		//for the use of the sleep function
#include <pthread.h>

void *myTurn(void *arg)
{
	for(int i=0; i<8; i++)
	{
		sleep(1);
		printf("My turn !\n");
	}
	return NULL;

}

void yourTurn()
{
	for(int i=0; i<3; i++)
	{
		sleep(2);
		printf("Your turn !\n");
	}
}

int main(int argc, char const *argv[])
{
	pthread_t newthread;
	pthread_create(&newthread, NULL, myTurn, NULL);
	yourTurn();
	pthread_join(newthread, NULL);
	return 0;
}