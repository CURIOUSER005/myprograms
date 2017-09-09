//Program for addition of two arrays

#include<stdio.h>
#include<omp.h>

int main()
{
	int size,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	int a[size],b[size],c[size];
	
	printf("\nEnter the array A elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("\nEnter the array B elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&b[i]);	
	}	
	#pragma omp parallel shared(a,b,c,size)
	{
		#pragma omp for schedule(dynamic)
		for(i=0;i<size;i++)
		{
			c[i]=a[i]+b[i];
		}
		
		
	}
	printf("After adding we get array elements as");
	for(i=0;i<size;i++)
	{
		printf("\n%d",c[i]);
	}

}	
