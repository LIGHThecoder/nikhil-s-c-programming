

// pointers

#include <stdio.h>
int main()
{
    printf("lets learn about pointers\n");

    int a = 76;
    int *ptra = &a;

    
    printf("the address of pointer to a is %p\n", &ptra); // %x is formate specifiers to chick the address of pointers do %p
    printf("the address of pointer to a is %p\n", &a); // %x is formate specifiers to chick the address of pointers do %p
    printf("the address of pointer to a is %p\n\n", ptra); // %x is formate specifiers to chick the address of pointers do %p


    printf("the value of a is %d\n", *ptra);              //to print the value of a 
    printf("the value of a is %d\n", a);  //to print the value of a 
    return 0;
}

/*output
lets learn about pointers
the address of pointer to a is 0061FF18
the address of pointer to a is 0061FF1C
the address of pointer to a is 0061FF1C
the value of a is 76
the value of a is 76*/