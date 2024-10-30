#include <stdio.h>
int main() {
  int a,b;
  char op;
  printf("enter a & b: ");
  scanf("%d%d %c",&a,&b,&op);
  switch(op)
  {
      case '+': printf("add is %d",a+b);
      break;
      case '-': printf("sub is %d",a-b);
      break;
      case '/': printf("div is %d",a/b);
      break;
      case '*': printf("mul is %d",a*b);
      break;
      case '%': printf("rem is %d",a%b);
      break;
      default : printf("invaild op");
      break;
  }
  return 0;
}
