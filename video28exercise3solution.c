

// exercise solution recursions

#include <stdio.h>

int fib_recursion(int n)
// {
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    else
    {
        return fib_recursion(n - 1) + fib_recursion(n - 2);
    }

    return 0;
}

int fib_interative(int n)                  /// interactive approach is good
{
 int a=0;
 int b=1;

 for (int i = 0; i < n-1; i++)
 {
    b=a+b;          /////  1
    a=b-a;          /////  1
 }
 
    return 0;
}

int main()
{
    int number;
    printf("enter tey index to get fibonaci series\n");
    scanf("%d", &number);
    printf(" the value of fibonacci number at position no %d using iterative approach is %d \n", number, fib_recursion(number));
    printf(" the value of fibonacci number at position no %d using resursive approach is %d \n", number, fib_recursion(number));
    return 0;
}

/* output----------
enter tey index to get fibonaci series
41
 the value of fibonacci number at position no 41 using iterative approach is 102334155 
 the value of fibonacci number at position no 41 using resursive approach is 102334155 */



// #include <stdio.h>


// int fib_recursive(int n)
// {
//     if(n==1 || n==2){
//         return n-1;
//     }
//     else{
//         return fib_recursive(n-1) + fib_recursive(n-2);
//     }    
// }


// int fib_iterative(int n)
// {
//     int a = 0;
//     int b = 1;

//     for (int i = 0; i < n-1; i++)
//     {
//         b = a+b; //1 for iteration 1
//         a = b-a; //1 for iteration 1

//     }
    
//     return a;
// }

// int main()
// {
//     int number;
//     printf("Enter the index to get fibonacci series\n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
//     printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
//     return 0;
// }