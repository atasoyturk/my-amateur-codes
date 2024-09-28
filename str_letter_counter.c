#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void calculate(char* );

int main()
{
    char message[100];
    
    puts("Enter a sentence: ");
    gets(message);

    calculate(message);

    return 0;
}

void calculate(char* ptr )
{
    int letters[26], i=0, length;
    char activeletter;

    length = strlen(ptr);

    for ( i = 0; i < 26; i++)
    {
        letters[i] = 0;
    }
    for ( i = 0; i < length; i++)
    {
        activeletter = tolower(*(ptr+i));
        letters[activeletter-97]++;
    }
    
    printf("Letter\tRepeat\n");
    printf("------\t------\n");
    
	for ( i = 0; i < 26; i++)
    {
        if ( letters[i]!=0)
        {
            printf("%c\t%d\n", i+97, letters[i]);
        }
   }
}
