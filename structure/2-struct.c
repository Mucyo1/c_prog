#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct studentinfo 
// studentinfo is a structure tap or type it helps create different
// structure names with same stucture members
    {
        //these are structure members
        char *name;
        char *email;
        int age;
    };

int manager()
{
    char title[] = "kageyo";

    printf("staff manager is: %s", title);

    return 0;
}

int main ()
{

    struct studentinfo student1, student2 ;
    // student1 and student2 are structure names with same struct members
    student1.name = "Mucyo Prince Herve";
    student1.email = "mucyoprinceherve@gmail.com";
    student1.age = 20;

    //**----------------***-----------------*//

    student2.name = "tech monster";
    student2.email = "techmonster@gmail.com";
    student2.age = 25;



    printf("%d\n\n", manager());
    printf("student's name: %s\n", student1.name);
    printf("student's email: %s\n", student1.email);
    printf("student's age is: %d\n\n", student1.age);

    printf("student's name: %s\n", student2.name);
    printf("student's email: %s\n", student2.email);
    printf("student's age is: %d\n", student2.age);

    return 0;
}
