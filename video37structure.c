
// //////////////////////////////date 22/1/24

// //-------------------------- structure


// #include <stdio.h>
// int main()
// {
//     struct studnetdata
//     {
//         int rollno;
//         float percentage;
//         char grade;
//     } nikhil, rahul, light;

//     nikhil.rollno = 23;
//     nikhil.percentage = 72.60;
//     nikhil.grade = 'A';

//     printf("nikhil rollno is %d\n", nikhil.rollno);
//     printf("nikhil had got %0.2f percentage\n", nikhil.percentage);
//     printf("nikhil had got %c grade \n\n", nikhil.grade);

//     /////////////////////////////////////////////

//     rahul.rollno = 43;
//     rahul.percentage = 82.60;
//     rahul.grade = 'o';

//     printf("rahul rollno is %d\n", rahul.rollno);
//     printf("rahul had got %0.2f percentage\n", rahul.percentage);
//     printf("rahul had got %c grade \n\n", rahul.grade);

//     /////////////////////////////////////

//     light.rollno = 87;
//     light.percentage = 90.60;
//     light.grade = 'A';

//     printf("light rollno is %d\n", light.rollno);
//     printf("light had got %0.2f percentage\n", light.percentage);
//     printf("light had got %c+ grade \n\n", light.grade);

//     return 0;
// }

/*nikhil rollno is 23
nikhil had got 72.60 percentage
nikhil had got A grade

rahul rollno is 43
rahul had got 82.60 percentage
rahul had got o grade

light rollno is 87
light had got 90.60 percentage
light had got A+ grade*/

/*quick quiz
print informaton of a given studnet*/

// #include <stdio.h>
// int main()
// {
//     struct studnetdata
//     {
//         int rollno;
//         float percentage;
//         char grade;
//     } nikhil, rahul, light;

//     nikhil.rollno = 23;
//     nikhil.percentage = 72.60;
//     nikhil.grade = 'A';

//     printf("nikhil rollno is %d\n", nikhil.rollno);
//     printf("nikhil had got %0.2f percentage\n", nikhil.percentage);
//     printf("nikhil had got %c grade \n\n", nikhil.grade);

//     /////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     struct studnetdata
//     {
//         int rollno;
//         float percentage;
//         char grade;
//     } nikhil, rahul, light;

//     nikhil.rollno = 23;
//     nikhil.percentage = 72.60;
//     nikhil.grade = 'A';

//     printf("nikhil rollno is %d\n", nikhil.rollno);
//     printf("nikhil had got %0.2f percentage\n", nikhil.percentage);
//     printf("nikhil had got %c grade \n\n", nikhil.grade);

//     /////////////////////////////////////////////

// structure
// #include <stdio.h>
// #include <string.h>
// struct studnetdata /// global variable
// {
//     int rollno;         /// global variable
//     float percentage;   /// global variable
//     char grade;         /// global variable
//     char name[34];      /// global variable
// } nikhil, rahul, light; /// global variable

// void peace()
// {
//     printf("%s", nikhil.name);
// }
// int main()
// {

//     nikhil.rollno = 23;
//     nikhil.percentage = 72.60;
//     nikhil.grade = 'A';

//     strcpy(nikhil.name, "God of the new world\n"); // by doing this you can store message or words in structure.
//                                                    // this string "god of the new world. will get copy in nikhl.name thus whenever we will put to ptint nikhli.name well will come out put as god od new world"

//     // printf("nikhil rollno is %d\n", nikhil.rollno);
//     // printf("nikhil people call you %s\n", nikhil.name);
//     // printf("nikhil had got %0.2f percentage\n", nikhil.percentage);
//     printf(nikhil.name);
//     // printf("nikhil had got %c grade \n\n", nikhil.grade);
// }
// /*nikhil rollno is 23
// nikhil people call you God of the new world  // change

// nikhil had got 72.60 percentage
// nikhil had got A grade*/

/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
int main()
{
    char route[56]; // declare a char array with size 56
    printf("Enter the route: "); // ask the user to enter the route
    scanf("%[^\n]%*c", route); // read the route from the user and store it in the array
    printf("The route is: %s\n", route); // print the route on the screen
    return 0;
}

