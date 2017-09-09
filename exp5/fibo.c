#include<stdio.h>
#include<omp.h>
int main()
{
	int i=0,n;
	int first=0,second=1,next_term;
	next_term=first+second;
	printf("Enter the required no. of fibonacci series:");
	scanf("%d",&n);
	
	printf("\nFibonacci series upto %d is: \n%d,\t%d",n,first,second);
	#pragma omp parallel 	
	{
	#pragma omp critical 	
	while(i <n)
        {
        	printf(",\t%d ",next_term);
        	first = second;
        	second = next_term;
	        next_term=first+second;
		i++;
    	}
	}
}

