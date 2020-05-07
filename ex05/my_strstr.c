
#include <string.h>




char * my_strstr(char *param_1, char *param_2)
{
  const char *a = param_1, *b = param_2;
  for (;;) {
    if ( !*b ) return (char *) param_1;
    if ( !*a ) return NULL;
    if ( *a++ != *b++) { a = ++param_1; b = param_2; }
  }
}