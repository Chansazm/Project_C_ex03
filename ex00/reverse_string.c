#include <string.h>



char * reverse_string(char* param_1) {

    char *left_pointer;
    char *right_pointer;

    left_pointer = param_1;
    right_pointer = param_1 + strlen(param_1) - 1;

    while (right_pointer > left_pointer)
    {
        char temp = *right_pointer;
        *right_pointer = *left_pointer;
        *left_pointer = temp;

        left_pointer++;
        right_pointer--;
    }
    return param_1;


}