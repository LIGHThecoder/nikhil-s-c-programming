

// static variables

// #include<stdio.h>

// int fuction1()
// {
//     return 100;
// }
// int main()
// {
//     printf("the value of function 1 is %d", fuction1());
// return 0;
// }

// the value of function 1 is 100

// #include <stdio.h>

// int z = 53;
// int fuction1()
// {

//     int loc = 87;
//     printf("the value of z is %d\n", loc);
//     return 0;
// }
// int main()
// {
//     int z = 98;
// printf("the value of z in main function is %d\n", z);
//     printf("%d", fuction1());
//     printf("the value of z is %d", z);
//     // printf("%d", fuction1());
//     // int b;
//     printf("", fuction1());
//     // printf("the address of b is %d", &b);
//     // printf("the value of function 1 is %d", fuction1( b));
//     return 0;
// } // the address of b is 6422252
// // 0the address of b is 6422300

// statics variable
#include <stdio.h>
// in order to add or increase the value of a variable by 1 we can use static varibale by declaring it and simple ++ of the variable is must.
int light()
{
    static int b = 35;
    printf("the value of b is %d\n", b);
    b++;
    return 0;
}
int main()
{
    // light()
    printf("", light());
    printf("", light());
    printf("", light());
    printf("", light());
    // printf("the value of a is %d", light);

    return 0;
}
/*
the value of b is 35
the value of b is 36
the value of b is 37
the value of b is 38*/