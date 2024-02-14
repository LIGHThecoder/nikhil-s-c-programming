
// table of 15

// #include<stdio.h>
// int main()
// {
//     int a =107;
//     printf("following is the table of 15\n");

//     for (int i = 1; i < 11; i++)
//     {
// // int b=a*i;
//         printf("%d*%d=%d\n",a,i,i*a);
//     }

// return 0;
// }

// //
/* to print octacl and hexadecimal versino of decimal

decimal   octal  hexadecimal
0          0            0
1          1            1
2          2            2
3          3            3
4          4            4
5          5            5
6          6            6
7          7            7
8          10           8
9          11           9
10         12           a
11         13           b
12         14           c
13         15           d
14         16           e
15         17           f
16         20           10
17         21           11
18         22           12
19         23           13
20         24           14

*/

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // Remove the trailing spaces from the beginning
    while (string[0] == ' ')
    {
        // Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i + 1];
        }
    }
    // Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "    <harrysdfsdfsdf>this is a heading    </harry>     ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}
/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/

/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/
