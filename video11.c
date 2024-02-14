// #include <stdio.h>
// int main()
// {
//     printf("wow the wrold");
//     return 0;
// }

//____________________ switch case statements__________________________

#include <stdio.h>
int main()
{
    int rollno, seateNO;
    // const char P =98;
    printf("enter your roll number\n");
    scanf("%d", &rollno);

    printf("enter your seate no\n");
    scanf("%d", &seateNO);

    printf(" the entered roll number is %d.\n", rollno);

    switch (rollno)
    {
    case 1:
        printf("your name is nikhil.\n");
        switch (seateNO)                    //
        {//------------------------------------------------this is switch statement in the switch statements.
        case 70://------------------------------------------------this is switch statement in the switch statements.
            /* code */
            printf("you got A+ grade ");//------------------------------------------------this is switch statement in the switch statements.
            break;//------------------------------------------------this is switch statement in the switch statements.
//------------------------------------------------this is switch statement in the switch statements.
        default://------------------------------------------------this is switch statement in the switch statements.
            printf("fail");//------------------------------------------------this is switch statement in the switch statements.
            break;//------------------------------------------------this is switch statement in the switch statements.
        }
        break;
    case 2:
        printf("your name is light.");
        break;
    case 3:
        printf("your name is rahul.");
        break;
    case 4:
        printf("your name is steve.");
        break;
    case 5:
        printf("your name is chintu.");
        break;
    case 6:
        printf("your name is pat.");
        break;
    case 7:
        printf("your name is dreak.");
        break;
    case 8:
        printf("your name is chris.");
        break;
    case 9:
        printf("your name is honey.");
        break;
    case 10:
        printf("your name is latin.");
        break;

    default:
        printf("sorry this roll no seems to not in the server the remeaning roll noumbers are getting into the server so please wait...");
        break;
    }
    return 0;
}