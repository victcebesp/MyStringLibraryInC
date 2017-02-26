//
//  mistring.c
//  
//
//  Created by Víctor Ceballos Espinosa on 14/2/17.
//
//
#include "mistring.h"

int mi_strlen (char* str){
    int index = 0;
    while(*(str++)) index++;
    return index;
}

char * mi_strcpy(char *s1, char *s2){
    char *s = s1;
    while ((*s++ = *s2++));
    return (s1);
}

char* mi_strcat(char* s1, char* s2){
    char* str = s1 + mi_strlen(s1);
    mi_strcpy(str, s2);
    return s1;
}

char* mi_strdup(char* str){
    char* duplicated = (char*) malloc(mi_strlen(str) * sizeof(char));
    duplicated = mi_strcpy(duplicated, str);
    return duplicated;
}

int mi_strequals(char* s1, char* s2){
    if(mi_strlen(s1) != mi_strlen(s2)) return 0;
    int i;
    for(i = 0; i < mi_strlen(s1); i++){
        if (*(s1+i) != *(s2+i)) {
            return 0;
        }
    }
    return 1;
}
