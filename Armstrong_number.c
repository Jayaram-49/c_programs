#include<stdio.h>
#include<math.h>
void main()
{
   int A,n,sum=0,rem;
   printf("enter n: ");
   scanf("%d",&n);
   A = n;
   while(n>0)
   {
       rem = n % 10;
       sum = sum+pow(rem,3);
       n/=10;
   }
   if(A==sum)
   {
       printf("Given number  %d  is Armstrong number",sum);
   }
   else
      printf("Given number  %d  is not  Armstrong number",sum);
}
