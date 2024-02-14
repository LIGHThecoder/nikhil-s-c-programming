#include <stdio.h> // this is the first line of code. any line startin with # represents a preprocessing command. It tells our programe that before its executing, it must include the stdio.h named file in it because we are using some of the commands or codes from this file.

int main()// it is a function 
{
    int a, b;// initializing with integer means that we can store interger values in it.
    {

        printf("enter number for A as \n ");
        scanf("%d", &a);// here &a gives the address of variable a to store the user given value. %d notifies that the value should be of integer type.
    }
    {

        printf("enter number for B as \n ");
        scanf("%d", &b);
    }

    printf("the sum of two number is %d", a + b);

    return 0;
}