#include <stdio.h>
int main() {
    char ch;
    printf("enter ch: ");
    scanf("%c",&ch);
  switch(ch)
  {
      case 'A':
      case 'a': 
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u': printf(" word is vowel",ch);
      break;
      default : printf("no vowel");
      break;
  }
  return 0;
}
