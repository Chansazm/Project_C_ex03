#include <stdio.h>
#include <stdbool.h>
/*
typedef struct integer_array
{
    int size;
    int* array; 
}integer_array;
*/
bool my_is_sort(integer_array * param_1) 
{
    
    while (param_1->size >= 1)
        return 1;
        if (param_1->size -1 >= param_1->size - 2)
        return true;
    
    return false; 
}


//[4,7,0,3]---> False