#include<stdio.h>
#include<omp.h>
int main()
{
#pragma omp parallel
{
	#pragma omp task
	{
		printf("task 1 %d\n",omp_get_thread_num());
	}
	#pragma omp single
#pragma omp task
	{
		printf("task 2 %d\n",omp_get_thread_num());
	}
#pragma omp task
	{
		printf("task 3 %d\n",omp_get_thread_num());
	}
#pragma omp task
	{
		printf("task 4 %d\n",omp_get_thread_num());
	}
#pragma omp task
	{
		printf("task 5 %d\n",omp_get_thread_num());
	}
#pragma omp task
	{
		printf("task 6 %d\n",omp_get_thread_num());
	}

}
return 0;
}
