#include<stdio.h>
#include<omp.h>
int main()
{
int i,size,a[size],min,max;
printf("\nEnter the size of array:");
scanf("%d",&size);
printf("\nEnter the elements:");
for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);

}
min=a[0];
max=a[0];
#pragma omp parallel for
for(i=0;i<size;i++)
{
	if(min > a[i])
	min=a[i];
	
	if(a[i]>max )
	max=a[i];
}
printf("\nmin = %d\tmax=%d\n",min,max);
return 0;

}
