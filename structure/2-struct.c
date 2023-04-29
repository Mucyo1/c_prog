#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct studentinfo
    {
        char *name;
        char *email;
        int age;
    }student1, student2;

int main (void)
{
    struct studentinfo ;
    student1.name = "Mucyo Prince Herve";
    student1.email = "mucyoprinceherve@gmail.com";
    student1.age = 20;
    
    //**----------------***-----------------*//
    
    student2.name = "tech monster";
    student2.email = "techmonster@gmail.com";
    student2.age = 25;
    
    printf("student's name: %s\n", student1.name);
    printf("student's email: %s\n", student1.email);
    printf("student's age is: %d\n\n", student1.age);
    
    printf("student's name: %s\n", student2.name);
    printf("student's email: %s\n", student2.email);
    printf("student's age is: %d\n", student2.age);

    return 0;
}
