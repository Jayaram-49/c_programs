#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("enter n: ");
    scanf("%d",&n);
    int p=n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev*10+rem;
        n=n/10;
    }
 if(p==rev)
 {
    printf("Given number palindrome number ");
 }
 else
 {
   printf("Given number not palindrome number ");
 }
printf("%d",rev);
}
