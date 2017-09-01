//simple omp master program
#include<stdio.h>
#include<omp.h>
int main()
{
 #pragma omp parallel
 {
	printf("\nHi"); 	
	#pragma omp master	

	printf("\tHow are you");	//only master thread will execute this statement
}
return 0;
}

