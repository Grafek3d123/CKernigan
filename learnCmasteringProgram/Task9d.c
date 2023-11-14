/*
* Write function that find the largest and smallest word in a string.
* Function takes three strings as arguments and has the following prototype:
* void find_max_min_str(const char * input_str, char * max_str, char * min_str).
* Example:
* If input_str is "It is a string with smallest and largest word" then max_str is "smallest" and min_str is "a".
*/

#include <stdio.h>
#include <string.h>

void find_max_min_str(const char * input_str, char * max_str, char * min_str) {
    const char * delim = " \t\n.,;:!?"; // word delimiters
    int max_len = 0; 
    int min_len = strlen(input_str) + 1;
    const char * p = input_str; // pointer to current character
    
    while (*p != '\0') {
        while (strchr(delim, *p) != NULL) { // skip delimiters
            p++;
        }
        if (*p != '\0') { // found a non-delimiter character
            const char * start = p; // start of current word
            while (*p != '\0' && strchr(delim, *p) == NULL) { // find end of current word
                p++;
            }
            int len = p - start; // length of current word
            if (len > max_len) { // found a new max word
                max_len = len;
                strncpy(max_str, start, len);
                max_str[len] = '\0'; // null-terminate the string
            }
            if (len < min_len) { // found a new min word
                min_len = len;
                strncpy(min_str, start, len);
                min_str[len] = '\0'; // null-terminate the string
            }
        }
    }
}

int main() {
    char input_str[] = "It is a string with smallest and largest word";
    char max_str[20], min_str[20];
    
    find_max_min_str(input_str, max_str, min_str);
    
    printf("Max word: %s\n", max_str);
    printf("Min word: %s\n", min_str);
    
    return 0;
}