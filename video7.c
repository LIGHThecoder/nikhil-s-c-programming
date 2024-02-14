// #include <stdio.h>
// int main()

// {
//     printf("NRG here");
//     return 0;
// }/

// operators  are special symbol which are used to perform actions or operations are know as operators.

// #include <stdio.h>

// int main()
// {
//     // /* code */
// int a=19;
// int b=19;

// ARITHMETIC operators
// + - * /
// printf("the sum is %d\n", a+b);
// printf("the substraction is %d\n", a-b);
// printf("the multiplication is %d\n", a*b);
// printf("the percentage is %d\n", a%b);

// RELATIONAL operators
//    < > >= <= == !=   1 means TRUE and 0 means FALSE
//   printf("is a is smallest the b = %d\n", a<b);
//   printf("IS a is  greatest than b = %d\n", a>b);
//   printf("is a is bigger than equal to b = %d\n", a>=b);
//   printf("is a is smaller than equal to b=  %d\n", a<=b);
//   printf("is a is equal to b = %d\n", a==b);
//   printf("is a is NOTequal to b = %d", a!=b);
//----OUT PUT-------
// is a is smallest the b = 1
// IS a is  greatest than b = 0
// is a is bigger than equal to b = 0
// is a is smaller than equal to b=  1
// is a is equal to b = 0
// is a is NOTequal to b = 1

/* ------------LOGICAL OPERATORS-----------
SYMBOLS   && || ! */

// printf(" is  a and b both are an integer %d\n", a&&b);
// printf(" is there an integer between a and b  %d\n", a||b);
// printf(" is there an integer between a and b  %d\n", !(a||b));  // ! this operator is used to reverse the out put 1 will be 0 and 0 will be 1
// // out put
// is  a and b both are an integer 0
//  is there an integer between a and b  1
//  is there an integer between a and b  0

/*--------BITWISE OPERATORS------ & ! ^ << >> ~
 */

// printf(" xxxxxxxxxxxxx  %d\n", a&b);

/*ASSINMENT OPERATORS
= += -= *= /=    */
// int a =5;
// int b=5;
//         printf(" xxxxxxx xxxxxx  %d\n", a+=b);
//         printf(" xxxxxxxxxxxxx  %d\n", a-=b);

//     return 0;
// }

// _____-code by harry
#include <stdio.h>

int main()
{
    /* code */
    int a, b;
    a = 2;
    b = 3;

    printf("a & b = %d\n", a & b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    return 0;
}
