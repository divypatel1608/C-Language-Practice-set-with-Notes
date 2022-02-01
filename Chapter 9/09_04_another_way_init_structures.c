#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee divy = {100, 34.23, "Harry"};

    printf("Code is: %d \n", divy.code);
    printf("Salary is: %f \n", divy.salary);
    printf("Name is: %s \n", divy.name);
 

    return 0;
}