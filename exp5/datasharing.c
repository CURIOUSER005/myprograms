#include<stdio.h>
#include<omp.h>
int main()
{
	int i,a=5,b=10;
	#pragma omp parallel shared(a) private(b)  
		
	{
		a++;    //here a's value will increase because its a shared variable
		b++;	//here b's value will get initailized as 0 because its restricted to this region only
		
	printf("\nValue of a inside:%d\nValue of b inside:%d \t\tThread no:%d",a,b,omp_get_thread_num());
	}	
	printf("\n\n\nValue of a:%d\nValue of b:%d\n",a,b);
}
