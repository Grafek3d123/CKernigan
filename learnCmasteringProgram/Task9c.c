#include <stdio.h>
#include <stdlib.h>

char str_array[7] = "Hello!"; //Strings as character arrays 
char *str_ptr  =  "Hello!"; // Strings using character pointers 
char *str_din; //Dynamically allocated 
int main() { 
    int size = 7; /*one extra for ‘\0’*/ 
    str_din = (char *)malloc(sizeof(char)*size); 
    *(str_din+0) = 'H'; 
    *(str_din+1) = 'e';   
    *(str_din+2) = 'l'; 
    *(str_din+3) = 'l'; 
    *(str_din+4) = 'o'; 
    *(str_din+5) = '!';   
    *(str_din+6) = '\0';       

    printf("sizeof(str_ptr): \t%lu\n", sizeof(str_ptr));
    printf("sizeof(str_array): \t%lu\n", sizeof(str_array));
    printf("sizeof(str_din): \t%lu\n", sizeof(str_din));

    return 0; 
}