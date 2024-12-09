#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,esum=0,odsum=0,dif;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
    if(i%2==0)
    {
    esum=esum+i;
    }
    else
    {
        odsum=odsum+i;
    }
    }
    printf("sum of even nunbers is %d\n",esum);
    printf("sum of odd numbers is %d\n",odsum);
    printf("difference b/w sum and odd is %d\n",abs(esum-odsum));
}
