#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct car
    {
        int fuel;
        int seating_cap;
        float city_mile;
    };

int main ()
{
    struct car c[2];
    int i;
    
    for (i = 0; i < 2; i++)
    {
        printf("Enter the car %d fuel tank capacity: ", i+1);
        scanf("%d", &c[i].fuel);
        printf("Enter the car %d seating capacity: ", i+1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter the car %d city mileage: ", i+1);
        scanf("%f", &c[i].city_mile);
        
    }
    printf("\n\n");
     
    for (i = 0; i < 2; i++)
    {
        printf("car %d details\n\n", i+1);
        printf("The fuel tank capacity: %d\n",c[i].fuel);
        
        printf("The seating capacity: %d\n", c[i].seating_cap);
        printf("The car city mileage: %f\n", c[i].city_mile);
        
    }
    return 0;
}
