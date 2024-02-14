

// #include<stdio.h>
// int main()
// {
//     printf("wowo");
// return 0;
// }

// making tabel tell 10

// there are two ways simple print command and looops method

// method 1

// #include <stdio.h>
// int main(int table)
// {
//     printf("enter the number of which you want the table of : \n");
//     scanf("%d", &table);

//     printf("following is the table of %d\n", table);

//     // \n
//     printf("%d*1=%d\n", table, table * 1);
//     printf("%d*2=%d\n", table, table * 2);
//     printf("%d*3=%d\n", table, table * 3);
//     printf("%d*4=%d\n", table, table * 4);
//     printf("%d*5=%d\n", table, table * 5);
//     printf("%d*6=%d\n", table, table * 6);
//     printf("%d*7=%d\n", table, table * 7);
//     printf("%d*8=%d\n", table, table * 8);
//     printf("%d*9=%d\n", table, table * 9);
//     printf("%d*10=%d\n", table, table * 10);

//     return 0;
// }

// method 2 using loops

#include <stdio.h>
int main(int intable)
{
    printf("enter the number of which you want the table of : \n");
    scanf("%d", &intable);

    printf("following is the table of %d\n", intable);

    for (int i = 0; i < 11; i++)
    {
    printf("%d*%d= %d\n", intable, i, intable*i);
    // printf("%d*%d= %d\n", intable, i, intable*i);
        
    }
    
    return 0;
}