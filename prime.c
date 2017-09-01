 
#include <stdio.h>
#include<omp.h>
int main()
{
	int flag[1000],i,j,n;
    	printf("\n Enter the value of n:");
    	scanf("%d",&n);
	for(i=1;i<=n;i++)
   	 {
    	    flag[i]=1;
   	 }
  	  flag[1]=0; 
  
    for(i=2; i*i<=n; i++)			//logic for finding prime number
    {
   
       	#pragma omp for ordered
        for(j=i*i; j<=n;j=i+j)
        {
     		if(flag[j]==1)
                       flag[j]=0;       
     	}
 	}
        
      printf("\nPrime numbers from 1 to %d are\n",n);
    
    for(i=2;i<=n;i++)
    {
        if(flag[i] == 1)
        {
            printf("%d\t ",i);
        }
    }
    printf("\n");
}


