#include <stdio.h>
#include <stdlib.h>

void plural(char* s1, char* s2);

int main() {

    char string1[80], string2[80];
    printf("Enter an English noun: ");
    scanf("%s", string1);

    plural(string1, string2);
    printf("Its plural form : %s\n",  string2);
    
    return 0;
}

void plural(char* s1, char* s2){
    int i = 0;
    int length = 0;

    while (s1[length] != '\0'){
        length++;
    }

    if (length > 0 && s1[length - 1] == 'y'){
        for (i = 0; i < length - 1; i++){
            s2[i] = s1[i];
        }
        
        s2[i++] = 'i';
        s2[i++] = 'e';
        s2[i++] = 's';
        s2[i] = '\0';
    }
    else if (length > 1 && ((s1[length - 1] == 's') || (s1[length - 1] == 'h' && s1[length - 2] == 's') ||
            (s1[length - 1] == 'h' && s1[length - 2] == 'c') || (s1[length - 1] == 's' && s1[length - 2] == 'c')))
            {
            for (i = 0; i < length; i++){
                s2[i] = s1[i];
            }
                
            s2[i++] = 'e';
            s2[i++] = 's';
            s2[i] = '\0';
            }else {
                for (i = 0; i < length; i++){
                    s2[i] = s1[i];
                }
                s2[i++] = 's';
                s2[i] = '\0';
            }
}

