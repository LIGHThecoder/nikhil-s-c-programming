
/*date 22/01/24

typedef------------------------*/

#include <stdio.h>
struct studnetdata
{
    int rollno;
    float percentage;
    char grade;
    char name[56];
} nikhil, rahul, light;

// . this represents structure

int main()
{
    // nikhil.rollno = 28;
    // printf("roll no of nikhil is %d\n", nikhil.rollno);
    // nikhil.percentage = 45.00;
    // printf("percentage is of nikhil %0.2f\n", nikhil.percentage);
    //    printf("wow") ;
    typedef int integer;

    integer a = 5;

    integer b = 45;

    // c=34;  this will give error so i can write here integer which in have declare from int by typedef function.

    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);

    // int *a, *b;
    // int c = 89;
    // a = &c;
    // b = &c;
    return 0;
}
