#include<stdio.h>

int main(){
    // char str[] = "Divy";
    char str[] = {'D', 'i', 'v', 'y', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}