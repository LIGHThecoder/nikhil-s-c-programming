// printing star

// take input from the user and ask user to chose 0 for trangular star and 1 for reversed tringular star pattern
// then print the pattern accondinly..

// *
// **
// ***
// ****
// *****----------triangular star patter

// *****
// ***
// **
// *-----------reverse star patter

#include <stdio.h>
int main()
{
    int num;
    start:
    printf("\nenter what you want to print triangular or reversed triangular stars *.\n");
    printf("if you want to print triangular star then please click on 1 and if you want to print reverser star click on 2. 3 to quit\n");

    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("you have choose triangular start below here i have show you triangular star\n");
        for (int i = 0; i < 1; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 2; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 3; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 5; i++)
        {

            printf("*", i);
        }

        break;

    case 2:
        printf("you have choose reverse triangular start below here, i have show you reverse triangular star\n");
        for (int i = 0; i < 5; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 4; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 3; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 2; i++)
        {

            printf("*", i);
        }
        printf("\n");
        for (int i = 0; i < 1; i++)
        {

            printf("*", i);
        }

        break;
    case 3:
        printf("come back agin soon......");
        return 0;
    default:
        printf("sorry you can only choose numbers form 1 and 2.");
        break;
    }
    goto start;
    return 0;
}
