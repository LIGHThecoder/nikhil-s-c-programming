

// recursion

/*Recursive Functions :
Recursive functions or Recursion is a process when a function calls a copy of itself to work on smaller problems.

Recursion is the process in which a function calls itself directly or indirectly. And the corresponding function or function which calls itself is called as recursive function.

Any function which calls itself is called recursive function.
This makes life of programmer easy by dividing complex problem into simple or easier problems.
A termination condition is imposed on such functions to stop them executing copies of themselves forever or infinitely.
Any problem which can be solved recursively can also be solved iteratively.
Recursions are used to solve tower of Hanoi, Fibonacci series, factorial finding etc.

 */

//______ programe to get the factorical of_______

// factorial means the number which we want factorical of is - minus of the number which come before it. example if we want fatorial of 5 it mean it would be 5*4*3*2*1 and if i wnat factorical of 3 it means 3*2*1.

#include <stdio.h>

int factorial(int number)
{
    if (number==1||number==0)//  '||' this means or
    {
        return 1;
    }
    else
    {
        return (number *factorial(number-1));
    }
    
}
int main()
{

    int num;

    printf("enter the number of which you want the factorical of \n");
    scanf("%d", &num);

    printf("the factorical of %d is %d",num, factorial(num));
    return 0;
}

// ********output
/*enter the number of which you want the factorical of 
5
the factorical of 5 is 120*/