#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
    int value = 0;
    while(((*s1 != '\0') || (*s2 != '\0')) && (value==0)){
        if(*s1 == '\0'){
            value = -1;
        }else if(*s2 == '\0'){
            value = 1;
        }
        if(*s1==*s2){
        s1++;
        s2++;
    }else{
        if(*s1 < *s2){
            value = -1;
        }else{
            value = 1;
        }
    }
    }
    return(value);
}