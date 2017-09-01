#include<stdio.h>
#include<omp.h>
int main()
{
int j,i,temp;
int arr[10]={1,8,4,15,20,13,43,7,64,10};
for(i=0;i<10;i++)
{
	printf("%d\t",arr[i]);
}

#pragma omp for 
for(i=0;i<10;i++)
{

	for(j=i+1;j<10;j++)
	{
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
}
printf("\n\n");
for(i=0;i<10;i++)
{
	printf("%d\t",arr[i]);
}
return 0;

}
