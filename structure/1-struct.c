#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct studentinfo
    {
        char *name;
        char *email;
        int age;
    }student;

int main (void)
{
    struct studentinfo ;
    student.name = "tech monster";
    student.email = "mucyoprinceherve@gmail.com";
    student.age = 20;

    printf("student's name: %s\n", student.name);
    printf("student's email: %s\n ", student.email);
    printf("student's age is: %d\n", student.age);

    return 0;
}
