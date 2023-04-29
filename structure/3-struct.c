#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.
/**
struct studentinfo
    {
        char *name;
        char *email;
        int age;
    };
**/
/*****************using typedef******************/

typedef struct studentinfo
    {
        char *name;
        char *email;
        int age;
    }info;
/** by doing this we don't need to write the whole struct type 
and name we simply type info**/
    
    
int main (void)
{
    //info is the name of the structure type
    info student;
    student.name = "tech monster";
    student.email = "mucyoprinceherve@gmail.com";
    student.age = 20;

    printf("student's name: %s\n", student.name);
    printf("student's email: %s\n", student.email);
    printf("student's age is: %d\n", student.age);

    return 0;
}
