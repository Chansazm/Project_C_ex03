//char* my_strncpy(char* param_1, char* param_2, int param_3) {

//}

char *my_strncpy(char *param_1, char *param_2, int param_3) 
{
    int i;
    for (i = 0; i < param_3 && param_2[i] != '\0'; i++) {
        param_1[i] = param_2[i];
    }
    while (i < param_3) {
        param_1[i++] = '\0';
    }
    return param_1;
}