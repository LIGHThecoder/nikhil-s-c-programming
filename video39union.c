// date 24/01/14

// union-----------------
/* Union is very similar to structure it also store data in it. but the only key difference is that in structure we declare variable with the help of data type and and store the data in it, also all variable which are declare are accessble at one time, where as in union we can deal with only one datatype that is the one variable which is written on they last line of the defination*/

#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} s1;

int main()
{

    s1.id = 234;
    s1.marks = 72;
    //    s1. name
    strcpy(s1.name, "nikhl\n");
    s1.fav_char = 'x'; /// the variable which is declare at the last in the main function will we be unois first prority and remaining will have garblage value.

    printf("your id is  %d\n", s1.id);
    printf("your marks are %d\n", s1.marks);
    printf("your favourite alphbet is %c \n", s1.fav_char);
    printf("the name is %s \n", s1.name);
    return 0;

    /*your id is  1751869816
    your marks are 1751869816
    your favourite alphbet is x        as you can see at last i has written s1.fav_char at last so that is the reason why obly x is recorrect and remaing are having garbage value.
    the name is xikhl*/
}
