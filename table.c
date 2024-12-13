#include<stdio.h>
#include<math.h>
void main()
{
   int i,n;
   printf("enter num:");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
       printf("%d x %d = %d\n",n,i,n*i);
   }
}
