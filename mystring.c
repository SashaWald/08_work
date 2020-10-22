#include <stdio.h>
#include <stdlib.h>

// calculate the length of a given string
int mystrlen(char *s){
    int count = 0;
    while (*(s+count)){
        count++;
    }
    return (count);
}

// copy up to n characters from string pointed to
char * mystrncpy(char *dest, char *source, int n){
    char * dest_copy = dest;
    int i = 0;
    for (int i; i < n; i++){
        dest_copy[i] = source[i];
    }
    return (dest_copy);
}

// append source to dest
char * mystrcat(char *dest, char *source){
    int len_dest = mystrlen(dest);
    int i;
    for (int i = 0; source[i]; i++){
        dest[len_dest+i] = source[i];
    }
    return(dest);
}

// compare length of s1 and s1 (-1 if str1 is less, 1 if it's more, 0 if equal)
int mystrcmp(char *s1, char *s2){
    while(*s1 && *s2){
        if (!(*s1 == *s2)){
            if (*s1 < *s2){
                return(-1);
            }
            if (*s2 < *s1){
                return(1);
            }
        }
        s1++;
        s2++;
    }
    if (!*s1 && !*s2){
        return(0);
    }
    else if(!*s1){
        return(-1);
    }
    return(1);
}

// return pointer to first occurence of char c
char * mystrchr(char *s, char c){
	while((*s)&&(*s != c)){ 
		s++; 	
    	if (*s == c) 
    		return s;
    }
    return 0;
}