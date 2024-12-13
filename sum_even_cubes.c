#include<stdio.h>
#include<math.h>
void main()
{
   int i,n,sum=0;
   printf("enter the upper linit:");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(i%2==0)
      {
          sum=sum+pow(i,3);
      }
  }
  printf("the sum is %d",sum);
}
