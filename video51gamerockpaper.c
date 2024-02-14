
// // date : 05/02/2024

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generateRandomnumbers(int n) // here i have declare a function generaterandomnumber and in that i have declare an intergae that is n
// {

//     srand(time(NULL)); //-----------srand means random numbers
//     return rand() % n;
// }

// //  create a rock, paper , scissors.
// /*player 1 : rock
// player 2 : computer sccisore

// rock vs scissors --rock*/
// // paper vs scissors --scissors*/
// // papervs rock --paper*/

// // write a C programe to allow user to play this game three times with computer. display the winnier name. you have to mentio name of the player as well.

// int main()
// {
//     printf("the random number between 0 to 100 is %d\n", generateRandomnumbers(55));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     char p1[7]; // thus i have created an array on 7 space
//     printf("enter the name of the first player\n");
//     scanf("%s", &p1);
//     printf("you have enterend %s as your gamming name\n\n", p1);

//     printf("get ready to play with a pro player computer master!!!!\n");

//     // srand(time(NULL));
//     int rock , paper, scissorrs;

//     return 0;
// }

//  create a rock, paper , scissors.
/*player 1 : rock
player 2 : computer sccisore

rock vs scissors --rock*/
// paper vs scissors --scissors*/
// papervs rock --paper*/

// write a C programe to allow user to play this game three times with computer. display the winnier name. you have to mentio name of the player as well.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generateRandomnumbers(int n) // here i have declare a function generaterandomnumber and in that i have declare an intergae that is n
// {

//     srand(time(NULL)); //-----------srand means random numbers
//     return rand() % n;

// }

// int greater(char c1, char c2)
// {
// // return 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1.

// }

// int main()

// {
//     printf("welcome to the rock, paper, siseors game.");
//     printf("if you want rock pick 1, if paper pick 2 and if siseors pick 3\n");
//     printf("player 1 turns :\n");
//     // printf("the random number between 0 to 100 is %d\n", generateRandomnumbers(55));
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int anytimeanynumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int num;
    int p1socre = 0;
    int compscore = 0;
    char p1[7]; // thus i have created an array on 7 space
    printf("welcome to NRG's paper, rock and sesor game.\n");
    printf("enter the name of the player\n");
    scanf("%s", &p1);
    printf("you have enterend %s as your gamming name\n", p1);
start:
    // begain:
    printf("chose 1 for rock, chose 2 for paper and 3 for siseros\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("------you have chossed rock as your option.------\n", num);
    }
    else if (num == 2)
    {
        printf("------you have chossed paper as your option.------\n", num);
    }
    else if (num == 3)
    {
        printf("------you have chossed siseros as your option.------\n", num);
    }
    else
    {
        printf("******** sorry rong number enter try again. you can entered only number from 1 to 3 **********\n");
        goto start;
    }

    printf("get ready to play with a pro player computer master!!!!\n");

    printf("\nnow computer's turn\n");
    // printf("the computer has chose %d as her option.", (anytimeanynumber(3) + 1));

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (anytimeanynumber(3) + 1 == 1)
    {
        printf("--------computer has chosen rock as his option--------\n");
    }
    else if (anytimeanynumber(3) + 1 == 2)
    {
        printf("--------computer has chosen paper as his option--------\n");
    }
    else if (anytimeanynumber(3) + 1 == 3)
    {
        printf("--------computer has chosen seisor as his option--------\n");
    }
    /////////////////////////////////////// match time///////////////////////////

    // printf("chose 1 for rock, chose 2 for paper and 3 for siseros\n");

    if (anytimeanynumber(3) + 1 == 1 /*<---rock*/ && num == 1 /*<---rock*/)
    {
        /* code */
        printf("great luck it's an tie but both will get 1 point added as there score\n");
        p1socre++;
        compscore++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }
    else if (anytimeanynumber(3) + 1 == 1 /*<---rock*/ && num == 2 /*<---paper*/)
    {
        /* code */
        printf("%s you win\n", p1);
        p1socre++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }
    else if (anytimeanynumber(3) + 1 == 1 /*<---rock*/ && num == 3 /*<---sesor*/)
    {
        /* code */
        printf("computer wins\n");
        compscore++;
        // printf("")
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }

    /////////////////////////////////////////////////////////////////////////////////

    else if (anytimeanynumber(3) + 1 == 2 /*<---paper*/ && num == 1 /*<---rock*/)
    {
        /* code */
        printf("computer wins\n");
        compscore++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }
    else if (anytimeanynumber(3) + 1 == 2 /*<---paper*/ && num == 2 /*<---rock*/)
    {
        /* code */
        printf("great luck it's an tie but both will get 1 point added as there score\n");
        p1socre++;
        compscore++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }
    else if (anytimeanynumber(3) + 1 == 2 /*<---paper*/ && num == 3 /*<---sesor*/)
    {
        /* code */
        printf("%s you win\n", p1);
        p1socre++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }

    ///////////////////////////////////////////////////////////////

    else if (anytimeanynumber(3) + 1 == 3 /*<---sesore*/ && num == 1 /*<---rock*/)
    {
        /* code */
        printf("%s you win.\n", p1);
        p1socre++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }
    else if (anytimeanynumber(3) + 1 == 3 /*<---sesore*/ && num == 2 /*<---paper*/)
    {
        /* code */
        printf("computer wins\n");
        compscore++;
        printf("%s score = %d\n computer score = %d\n\n", p1, p1socre, compscore);
    }

    else if (anytimeanynumber(3) + 1 == 3 /*<---sesore*/ && num == 3 /*<---sesor*/)
    {
        /* code */
        printf("great luck it's an tie but both will get 1 point added as there score\n");
        p1socre++;
        compscore++;
        printf("%s score = %d\n \n computer score = %d\n\n", p1, p1socre, compscore);
    }

    ///////////////////////////////---------------SORE-----------/////////////////////////////////////////

    // printf("computer score = %d\n",anytimeanynumber(3) + 1 == 1 /*<---rock*/ && num == 1 /*<---rock*/);
    if (p1socre == 3)
    {
        printf("congrats!!!!!! %s you win the 3 points match.\n");
        goto stop;
    }

    else if (compscore == 3)
    {
        printf("better luck %s next time sorry but this time computer master had won 3 points match \n", p1);
        goto stop;
    }

    else if (compscore == 3 && p1socre == 3)
    {
        printf("that's an ultimate tie both both played great\n");
        goto stop;
    }

    goto start;
stop:
    printf("hope you enjoy NRG's game\n");
    return 0;
}

