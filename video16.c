// #include<stdio.h>
// int main()
// {
//     printf("hellow world");
// return 0;
// }

/*Break and Continue Statements In C: C Tutorial In Hindi #16
Break Statement :
Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after loop or switch case.
Break statements are used to bring the program control out of the loop.
The break statement is used inside loops or switch statement in C Language.
Syntax for Break statement :*/

// #include <stdio.h>
// int main()
// {
//     int i, age;
//     for (i = 0; i < 5; i++)
//     {
//         /* code */
//         printf("interation time = %d\n enter your age : ", i);
//         scanf("%d", &age);

//         // if (age > 10)
//         // {
//         //     break; // cheaking break statements
//         // }
//         if (age < 10)
//         {
//             continue;
//             printf("hey guys\n");
//             printf("this code is printed conz if condition is not satisfied. \n");
//             printf("checking continue statements \n\n"); // checking continue statements
//         }
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\n", i);
        printf("enter your age\n");
        scanf("%d", &age);

        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("we don't have come across with any continue statemets\n");
        printf("we don't have come across with any continue statemets\n");
        printf("we don't have come across with any continue statemets\n");
        printf("we don't have come across with any continue statemets\n");
        printf("wow the worlds\n");
 
    }
           
return 0;
}