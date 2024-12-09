#include<stdio.h>
void main()
{
    int i,n,Sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
    if(i%2==0)
    {
    Sum=Sum+i;
    }
    }
    printf("%d\n",Sum);
}
