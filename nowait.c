#include<stdio.h>
#include<omp.h>
int main()
{
int i,j,k,a=40,b=20,c=30;
#pragma omp parallel 
{
#pragma omp for nowait
for(i=0;i<=5;i++)
{
a=a+1;
printf 
}
for(j=0;j<=5;j++)
{
b=b-1;
}
for(k=0;k<=5;k++)
{
c=c*2;
}

}
printf("A is %d\tB is %d\tC is %d\n",a,b,c);

return 0;
}
