#include <string.h>

int my_strcmp(char* param_1, char* param_2)


{
    while (*param_1 && *param_1 == *param_2) 
    
    { ++param_1; ++param_2; }

    return (int)(unsigned char)(*param_1) - (int)(unsigned char)(*param_2);
}
