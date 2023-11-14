/*
* Write function that find the largest and smallest word in a string.
* Function takes three strings as arguments and has the following prototype:
* void find_max_min_str(const char * input_str, char * max_str, char * min_str).
* Example:
* If input_str is "It is a string with smallest and largest word" then max_str is "smallest" and min_str is "a".
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void find_max_min_str(const char * input_str, char * max_str, char * min_str){
    int len = strlen(input_str);
    printf("%d\n", len);
    while(*input_str != ' ') {
        *max_str++ = *min_str++ = *input_str++; 
    }
    printf("max_str: %s/n", max_str);
    printf("min_str: %s/n", min_str);
}

int main() {
    char* input_str = "It is a string with smallest and largest word";
    int len = strlen(input_str);

    char* max_str = (char*) malloc((len + 1) * sizeof(char));
    char* min_str = (char*) malloc((len + 1) * sizeof(char));
    int i;

    // for(i = 0; *input_str != ' '; i++) {
    //     *max_str = *min_str = *input_str;
    //     input_str++;
    //     max_str++; 
    //     min_str++;
    // }
    // max_str[i] = min_str[i] = '\0'; 
    
    //printf("max_str: %s\n", max_str);
    //printf("min_str: %s\n", min_str);
    find_max_min_str(input_str, max_str, min_str);
}