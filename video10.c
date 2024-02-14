

// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

// #include<stdio.h>

// int main()

// {
//     int science , math;

//     printf("enter the marks you got in science exam \n");
//     scanf("%d", &science);

//     printf("enter the marks you got in math exam \n");
//     scanf("%d", &math);

//     printf("you have entered %d as your science marks and %d as your math marks\n", science, math);

//   if (/* condition */science <=15)
//   {
//     /* code */
//     printf("wow yxxxxxx");
//   }

//   else if (/* condition */math <=15)
//   {
//     /* code */ printf("wow mathematxxxxxx");
//   }

//   else if (science, math=45)
//   {
//     /* code */ printf("noooooooinsane iphow");
//   }

//   else
//   {
//     /* code */printf("sorrxxxxxx");
//   }

// }

#include <stdio.h>

int main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);

    printf("you have entered %d as your age\n", age);

    if (age >= 18)
    {
        /* code */ printf("you can vote");
    }
    else if (age <= 0)
    {
        /* code */ printf("you are not yet born");
    }
    else if (age <= 15)
    {
        printf("you are almost eligible to vote apply for it");
    }

    else
    {
        printf("sorry you cant vote");
    }

    return 0;
}