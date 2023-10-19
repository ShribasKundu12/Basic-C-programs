#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch;
  char s[10];
  char str[30];
  printf("Enter a Character -->");
  scanf("%c",&ch);
  printf("Enter a word -->");
  scanf("%s",&s);
  printf("Enter a sentence -->");
  fflush(stdin);
  scanf("%[^\n]s",str);
  printf("%c\n",ch);
  puts(s);
  puts(str);
  return 0;
}
