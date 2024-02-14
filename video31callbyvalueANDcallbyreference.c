

// call by values and call by reference----------

// #include<stdio.h>

// void changevalue(int*a)
// {
// *a=3235;
// }

// int main()
// {
//     int a =34, b=43;

//     printf("the value of a was %d\n",a);
//     changevalue(&a);

//     printf("the value of a is now %d\n",a);

// /*output
// the value of a was 34
// the value of a is now 355*/

// return 0;
// }

// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

// #include <stdio.h>

// void subadd(int *v)
// {
//     int a = 4, b = 3;

//     *v = a - b;
// }

// void addsub(int *z)
// {
//     int a = 4, b = 3;
//     *z = a + b;
// }

// int main()
// {

//     int a=4, b=3;
//     // a = a + b;
//     // b = a - b;
//     printf("the value of a was %d\n", a);
//     printf("the value of b was %d\n\n", b);

//     addsub(&a);
//     printf("the value of a is now %d\n", a);
//     subadd(&b);
//     printf("the value of b is now %d\n", b);
//     return 0;
// }

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

#include <stdio.h>

void subadd(int *b)
{
    // int a = 4, b = 3;

    *b = 4 - 3;
}

void addsub(int *a)
{
    // int a = 4, b = 3;
    *a = 4 + 3;
}

int main()
{

    int a = 4, b = 3;
    // a = a + b;
    // b = a - b;
    printf("the value of a was %d\n", a);
    printf("the value of b was %d\n\n", b);

    addsub(&a);
    printf("the value of a is now %d\n", a);
    subadd(&b);
    printf("the value of b is now %d\n", b);
    return 0;
}

/*
output
the value of a was 4
the value of b was 3

the value of a is now 7
the value of b is now 1*/