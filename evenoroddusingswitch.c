#include <stdio.h>
int main() {
    int num,temp;
    printf("enter num: ");
    scanf("%d",&num);
    temp= num%2;
    switch(temp)
    {
      case 0: printf("%d is even",num);
      break;
      case 1: printf("%d is odd",num);
      break;
     }
     return 0;
    }
