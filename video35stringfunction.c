// string is a null terminated characters
// char name []= "nikhil";  ------this is called as strings

// #include<stdio.h>
// #include<string.h>

// int main()

// {

//     char s1[]="nikhil";// we had made array of strings in char data type
//     char s2[]="rahul";

//     puts(strcat(s1,s2));
//     // printf("the lenght of s2 is %d", strlen(s2));

// //nikhilrahul

// return 0;
// }

/////////////////////////////////////////////////////////

// #include<stdio.h>
// #include<string.h>

// int main()

// {

//     char s1[]="nikhil";// we had made array of strings in char data type
//     char s2[]="rahul";

//     // puts(strcat(s1,s2));
//     printf("the lenght of s2 is %d", strlen(s2));

// //nikhilrahul

// //   the lenght of s2 is 5
// return 0;
// }

///////////////////////////////////////////////////////////

//  #include<stdio.h>
// #include<string.h>

// int main()

// {

//     char s1[]="nikhil";// we had made array of strings in char data type
//     char s2[]="rahul";

//     // puts(strcat(s1,s2));
//     printf("the lenght of s1 is %d\n", strlen(s1));
//     printf("the lenght of s2 is %d\n", strlen(s2));
//     printf("the revered string s1 is :");
//     puts(strrev(s1));// this will reverse the char nikhil
//     printf("the revered string s2 is :");
//     puts(strrev(s2));// this will reverse the char nikhil

// the lenght of s1 is 6
// the lenght of s2 is 5
// the revered string s1 is :lihkin
// the revered string s2 is :luhar

//   the lenght of s2 is 5
// return 0;
// }
/////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main()

// {

//     char s1[] = "nikhil"; // we had made array of strings in char data type
//     char s2[] = "rahul";
//     char s3[59];
//     // puts(strcat(s1,s2));
//     printf("the lenght of s1 is %d\n", strlen(s1));
//     printf("the lenght of s2 is %d\n", strlen(s2));
//     printf("the revered string s1 is :");
//     puts(strrev(s1)); // this will reverse the char nikhil
//     printf("the revered string s2 is :");
//     puts(strrev(s2)); // this will reverse the char nikhil

//     strcpy(s3, strcat(s1, s2)) // this will print the reverse char llike lihkin
//         puts(s3)               // this will print the reverse char llike lihkin

//         /*the lenght of s1 is 6
//         the lenght of s2 is 5
//         the revered string s1 is :lihkin
//         the revered string s2 is :luhar
//         lihkinluhar*/
//         return 0;
// }
////////////////////////////////////////////////////////////

// #include <stdio.h>
// #include <string.h>

// int main()

// {

//     char s1[] = "nikhil";// this represents -1 which alpabets comes first in alphabetical order that will print
//     char s2[] = "rahul";// wthis represents 1 hich alpabets comes first in alphabetical order that will print
//     char s3[59];
//     printf("the strcmp for s1, s2 returned %d", strcmp(s1, s2));// strcmp function is used to identify which variable of datatype come first

//  the strcmp for s1, s2 returned -1

// puts(strcat(s1,s2));
// printf("the lenght of s1 is %d\n", strlen(s1));
// printf("the lenght of s2 is %d\n", strlen(s2));
// printf("the revered string s1 is :");
// puts(strrev(s1)); // this will reverse the char nikhil
// printf("the revered string s2 is :");
// puts(strrev(s2)); // this will reverse the char nikhil

// strcpy(s3, strcat(s1, s2)) // this will print the reverse char llike lihkin
//     puts(s3)               // this will print the reverse char llike lihkin

/*the lenght of s1 is 6
the lenght of s2 is 5
the revered string s1 is :lihkin
the revered string s2 is :luhar
lihkinluhar*/

//         return 0;
// }

//

// #include<stdio.h>
// int main()
// {
//     char str[14]= "hellow world!";

//     puts(str);// prints the strings and a newline

//     // so puts are use to print the value for strings or arrays

//     //hellow world!
// return 0;
// }

/*quick quiz
allow user to enter two strings and then concatenate them by saying that str1 is a friend of str2

to print
str1 in friend of str2*/

// to print nikhil God of my world
////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

int main()
{

    char str1[50], str2[50], result[100]; // ---------Declare variables for input and output

    printf("Enter the first string: "); //--------- Ask the user to enter the first string
    scanf("%s", str1);

    printf("Enter the second string: "); // ---------Ask the user to enter the second string
    scanf("%s", str2);

    strcpy(result, str1); // ---------Copy the first string to the result

    strcat(result, " is a friend of "); // ---------Add the word "is" to the result

    strcat(result, str2); // ---------Add the second string to the result

    printf("The concatenated string is: %s\n", result); // ---------Print the result

    return 0;
}

///////////////////////////////////////////////////
