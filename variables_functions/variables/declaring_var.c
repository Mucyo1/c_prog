#include <stdio.h>
 int main ()
 {
    int x; // this is called declaring 
    x = 3;// this is called initialization
    int y = 5; // intialization + declaration
    
    int age = 21; //integer holds decimals
    float gpa = 2.5;//float holds fractional numbers 
    char grade = 'A';//char holds single character 
    char name[] = "Marry";//this char will hold a certain combination of characters or strings through the use of []
    float ga = 2.5;
    
    printf("my name is %s\n", name);
    printf("my age is %d\n", age);
    printf("my gpa is %f\n", gpa);// a double datatype uses %lf
    printf("my grades are %c\n", grade);
    printf("this is called the format specifier %.2f \n", ga);
    printf("this is different from %f \n", ga);// the use of 
    
    return (0);
 }