#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(char* str)
{
	int literal = 0;
	for (int i = 0; i < strlen(str); i++)
        {
               	if (str[i] >= 'a' && str[i] <= 'z')
               	{
               	        str[i] += 'A' - 'a';
           	}
		if (str[i] >= 'A' && str[i] <= 'Z')     { literal++; }

               	if (str[i] == '(')      { str[i] += '<' - '('; }
               	if (str[i] == ')')      { str[i] += '>' - ')'; }
        }
	puts(str); 
	return literal;	
}

void main()
{
	char *str;
	str = (char*)malloc(80);
	printf("Insert string: ");
	scanf("%s", str);
	printf("\nAmount of literal symbols: %d\n", func(str));	

}
