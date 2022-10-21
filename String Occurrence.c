#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256
int main(){
    char string[MAX_SIZE];
    char word[MAX_SIZE];
    int count=0;
    int wordlength, linelength;
    int i=0,j=0,found;
    gets(string);
    gets(word);

    for(i=0; i <= strlen(string)-strlen(word); i++)
    {
        found = 1;
        for(j=0; j<strlen(word); j++)
        {
            if(string[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            printf("Occurrence at index %d\n",i);
            count++;
        }
    }


    printf("Total number of occurrences = %d", count);

    return 0;


}

