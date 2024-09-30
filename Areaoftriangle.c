#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,Area;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is %f",Area);
}
