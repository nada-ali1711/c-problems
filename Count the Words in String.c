#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 1024

int count_word(char *str) {
  int count = 0;
  int in_word = 0;
  int i = 0;
  do {
     if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0') {
       if(in_word) {
         in_word = 0;
         count++;
       }
     } else {
       in_word = 1;
     }
  } while(str[i++]);

  return count;
}

int main() {
  char str[1024];
  gets(str);

  printf("%d words\n", count_word(str));
    return 0;
}
