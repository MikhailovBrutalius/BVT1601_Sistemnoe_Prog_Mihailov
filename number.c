#include <stdio.h>
#include <stdlib.h>

void getNumbers(int * a, int * b)
{
  char number[256];
  int c=0, i=0;
  
  printf("введите 2 номера:\n");
  fflush(stdout);
  
  while((c=fgetc(stdin))!='\n')  
	number[i++]=(char)c;
  /* добавить \0  string */
  number[i]=0;
  *a=atoi(number);    

  i=0;
  while((c=fgetc(stdin))!='\n')  
	number[i++]=(char)c;
  /* добавить \0  string */
  number[i]=0;
  *b=atoi(number);  
}
