
// // to make things run in parallal
// - processes ==> fork
// - threads ===> create_thread


#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

typedef struct data_s
{
	int *total;
	pthread_mutex_t lock;
} data_t;


void *routine(void *arg)
{
	data_t *data = (data_t *)arg;
	
	int i = 0;
	while (i < 20)
	{
		pthread_mutex_lock(&(data->lock)); 
		(*(data->total))++;
		pthread_mutex_unlock(&(data->lock)); 
		i++;
	}
	return NULL;
}






// int main()
// {
// 	data_t data;
	
// 	data.total = malloc(sizeof(int));
// 	*(data.total) = 0;
// 	pthread_mutex_init(&(data.lock), NULL);

// 	pthread_t thread1;
// 	pthread_t thread2;
// 	pthread_t thread3;
// 	pthread_t thread4;
// 	pthread_t thread5;
    
	
// 	pthread_create(&thread1, NULL, routine, &data);
// 	pthread_create(&thread2, NULL, routine, &data);
// 	pthread_create(&thread3, NULL, routine, &data);
// 	pthread_create(&thread4, NULL, routine, &data);
// 	pthread_create(&thread5, NULL, routine, &data);


// 	pthread_join(thread1, NULL);
// 	pthread_join(thread2, NULL);
// 	pthread_join(thread3, NULL);
// 	pthread_join(thread4, NULL);
// 	pthread_join(thread5, NULL);


// 	printf("%d\n", *(data.total));
// }


int main(int ac, char *av[])
{
	data_t data;
	
	data.total = malloc(sizeof(int));
	*(data.total) = 0;
	pthread_mutex_init(&(data.lock), NULL);

	if(ac != 2)
		return 1;
		
	int num = atoi(av[1]);
	int i = 0;
	pthread_t philo[num];
	while(i < num)
	{
		pthread_create(&philo[i], NULL, routine, &data);
		i++;
	}
	i = 0;
	while(i < num)
	{
		pthread_join(philo[i], NULL);
		i++;
	}


	


	printf("%d\n", *(data.total));
}









// void func(int *a, char batata)
// {

// }

// int main()
// {
// 	int a = 4;
// 	char b = 'Q';
// 	int *ptr = &a;


// 	func(ptr, b);
// }









