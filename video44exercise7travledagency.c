// by NRG
// exercise 7
// date 26/01/24
/*#include <stdio.h>
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
#include <string.h>

struct driverdata
{
    char name[100];
    int licnenseno;
    char routearrive[56];
    char routeends[56];
    int kms;

} driver1, driver2, driver3, driver4, driver5;

int main()
{
    int data;
    printf("enter your rollno:");
    scanf("%d", &data);
    printf("the entered rollno number is :%d\n", data);

    switch (data)
    {
    case 1:

        printf("enter your name \n");
        scanf("%s", &driver1.name);

        printf("enter your driving license no\n");
        scanf("%d", &driver1.licnenseno);

        printf("enter the place from where you start the travel\n");
        scanf("%s", &driver1.routearrive);

        printf("enter the place from where you end the travel\n");
        scanf("%s", &driver1.routeends);

        printf("enter how may kms you travel daily \n");
        scanf("%d", &driver1.kms);

        printf("------check your information------- \n");

        printf("\n1)your name is %s.\n", driver1.name);
        printf("2)your driving license number is %d.\n", driver1.licnenseno);
        printf("3)your everyday route is from %s to %s.\n", driver1.routearrive, driver1.routeends);
        // printf("you travel from  %s", driver1.routeends);
        printf("4)you travel per day atleast %d kms.\n", driver1.kms);
        printf("**********entries of driver number 1 is successfully done!!!!!!!!!!\n\n");

        // continue;

    case 2:
        printf("now please driver with rollno 2 fill the datat\n");

        printf("enter your name \n");
        scanf("%s", &driver2.name);

        printf("enter your driving license no\n");
        scanf("%d", &driver2.licnenseno);

        printf("enter the place from where you start the travel\n");
        scanf("%s", &driver2.routearrive);

        printf("enter the place from where you end the travel\n");
        scanf("%s", &driver2.routeends);

        printf("enter how may kms you travel daily \n");
        scanf("%d", &driver2.kms);

        printf("------check your information------- \n");

        printf("\n1)your name is %s.\n", driver2.name);
        printf("2)your driving license number is %d.\n", driver2.licnenseno);
        printf("3)your everyday route is from %s to %s.\n", driver2.routearrive, driver2.routeends);
        // printf("you travel from  %s", driver1.routeends);
        printf("4)you travel per day atleast %d kms.\n", driver2.kms);
        printf("**********entries of driver number 2 is successfully done!!!!!!!!!!\n\n");

        // continue;

    case 3:
        printf("now please driver with rollno 3 fill the datat\n");

        printf("enter your name \n");
        scanf("%s", &driver3.name);

        printf("enter your driving license no\n");
        scanf("%d", &driver3.licnenseno);

        printf("enter the place from where you start the travel\n");
        scanf("%s", &driver3.routearrive);

        printf("enter the place from where you end the travel\n");
        scanf("%s", &driver3.routeends);

        printf("enter how may kms you travel daily \n");
        scanf("%d", &driver3.kms);

        printf("------check your information------- \n");

        printf("\n1)your name is %s.\n", driver3.name);
        printf("2)your driving license number is %d.\n", driver3.licnenseno);
        printf("3)your everyday route is from %s to %s.\n", driver3.routearrive, driver3.routeends);
        // printf("you travel from  %s", driver1.routeends);
        printf("4)you travel per day atleast %d kms.\n", driver3.kms);
        printf("**********entries of driver number 3 is successfully done!!!!!!!!!!\n\n");

        // continue;

    case 4:
        printf("now please driver with rollno 4 fill the datat\n");

        printf("enter your name \n");
        scanf("%s", &driver4.name);

        printf("enter your driving license no\n");
        scanf("%d", &driver4.licnenseno);

        printf("enter the place from where you start the travel\n");
        scanf("%s", &driver4.routearrive);

        printf("enter the place from where you end the travel\n");
        scanf("%s", &driver4.routeends);

        printf("enter how may kms you travel daily \n");
        scanf("%d", &driver4.kms);

        printf("------check your information------- \n");

        printf("\n1)your name is %s.\n", driver4.name);
        printf("2)your driving license number is %d.\n", driver4.licnenseno);
        printf("3)your everyday route is from %s to %s.\n", driver4.routearrive, driver4.routeends);
        // printf("you travel from  %s", driver1.routeends);
        printf("4)you travel per day atleast %d kms.\n", driver4.kms);
        printf("**********entries of driver number 4 is successfully done!!!!!!!!!!\n\n");

        // continue;

    case 5:
        printf("now please driver with rollno 5 fill the datat\n");

        printf("enter your name \n");
        scanf("%s", &driver5.name);

        printf("enter your driving license no\n");
        scanf("%d", &driver5.licnenseno);

        printf("enter the place from where you start the travel\n");
        scanf("%s", &driver5.routearrive);

        printf("enter the place from where you end the travel\n");
        scanf("%s", &driver5.routeends);

        printf("enter how may kms you travel daily \n");
        scanf("%d", &driver5.kms);

        printf("------check your information------- \n");

        printf("\n1)your name is %s.\n", driver5.name);
        printf("2)your driving license number is %d.\n", driver5.licnenseno);
        printf("3)your everyday route is from %s to %s.\n", driver5.routearrive, driver5.routeends);
        // printf("you travel from  %s", driver1.routeends);
        printf("4)you travel per day atleast %d kms.\n", driver5.kms);
        printf("**********entries of driver number 5 is successfully done!!!!!!!!!!\n\n");

        break;

    default:
        printf("sorry your rollno is not registered in are department try to approach another city\n");
        break;
    }

    printf("final enteries of all divers are as following:\n");

    printf("\n1)your name is %s.\n", driver1.name);
    printf("2)your driving license number is %d.\n", driver1.licnenseno);
    printf("3)your everyday route is from %s to %s.\n", driver1.routearrive, driver1.routeends);
    // printf("you travel from  %s", driver1.routeends);
    printf("4)you travel per day atleast %d kms.\n", driver1.kms);
    // printf("**********entries of driver number 1 is successfully done!!!!!!!!!!\n\n");

    printf("\n1)your name is %s.\n", driver2.name);
    printf("2)your driving license number is %d.\n", driver2.licnenseno);
    printf("3)your everyday route is from %s to %s.\n", driver2.routearrive, driver2.routeends);
    // printf("you travel from  %s", driver1.routeends);
    printf("4)you travel per day atleast %d kms.\n", driver2.kms);
    // printf("**********entries of driver number 2 is successfully done!!!!!!!!!!\n\n");

    printf("\n1)your name is %s.\n", driver3.name);
    printf("2)your driving license number is %d.\n", driver3.licnenseno);
    printf("3)your everyday route is from %s to %s.\n", driver3.routearrive, driver3.routeends);
    // printf("you travel from  %s", driver1.routeends);
    printf("4)you travel per day atleast %d kms.\n", driver3.kms);
    // printf("**********entries of driver number 3 is successfully done!!!!!!!!!!\n\n");

    printf("\n1)your name is %s.\n", driver4.name);
    printf("2)your driving license number is %d.\n", driver4.licnenseno);
    printf("3)your everyday route is from %s to %s.\n", driver4.routearrive, driver4.routeends);
    // printf("you travel from  %s", driver1.routeends);
    printf("4)you travel per day atleast %d kms.\n", driver4.kms);
    // printf("**********entries of driver number 4 is successfully done!!!!!!!!!!\n\n");

    printf("\n1)your name is %s.\n", driver5.name);
    printf("2)your driving license number is %d.\n", driver5.licnenseno);
    printf("3)your everyday route is from %s to %s.\n", driver5.routearrive, driver5.routeends);
    // printf("you travel from  %s", driver1.routeends);
    printf("4)you travel per day atleast %d kms.\n", driver5.kms);
    // printf("**********entries of driver number 5 is successfully done!!!!!!!!!!\n\n");
    return 0;
}

/* output

the entered rollno number is :1
enter your name
nikhil
enter your driving license no
234
enter the place from where you start the travel
mumbai
enter the place from where you end the travel
phune
enter how may kms you travel daily
23
------check your information-------

1)your name is nikhil.
2)your driving license number is 234.
3)your everyday route is from mumbai to phune.
4)you travel per day atleast 23 kms.
**********entries of driver number 1 is successfully done!!!!!!!!!!

now please driver with rollno 2 fill the datat
enter your name
rahul
enter your driving license no
223
enter the place from where you start the travel
america
enter the place from where you end the travel
india
enter how may kms you travel daily
345
------check your information-------

1)your name is rahul.
2)your driving license number is 223.
3)your everyday route is from america to india.
4)you travel per day atleast 345 kms.
**********entries of driver number 2 is successfully done!!!!!!!!!!

now please driver with rollno 3 fill the datat
enter your name
light
enter your driving license no
324
enter the place from where you start the travel
japan
enter the place from where you end the travel
india
enter how may kms you travel daily
342
------check your information-------

1)your name is light.
2)your driving license number is 324.
3)your everyday route is from japan to india.
4)you travel per day atleast 342 kms.
**********entries of driver number 3 is successfully done!!!!!!!!!!

now please driver with rollno 4 fill the datat
enter your name
rohan
enter your driving license no
435
enter the place from where you start the travel
phune
enter the place from where you end the travel
mumbai
enter how may kms you travel daily
298
------check your information-------

1)your name is rohan.
2)your driving license number is 435.
3)your everyday route is from phune to mumbai.
4)you travel per day atleast 298 kms.
**********entries of driver number 4 is successfully done!!!!!!!!!!

now please driver with rollno 5 fill the datat
enter your name
rajendra
enter your driving license no
283
enter the place from where you start the travel
village
enter the place from where you end the travel
city
enter how may kms you travel daily
492
------check your information-------

1)your name is rajendra.
2)your driving license number is 283.
3)your everyday route is from village to city.
4)you travel per day atleast 492 kms.
**********entries of driver number 5 is successfully done!!!!!!!!!!

final enteries of all divers are as following:

1)your name is nikhil.
2)your driving license number is 234.
3)your everyday route is from mumbai to phune.
4)you travel per day atleast 23 kms.

1)your name is rahul.
2)your driving license number is 223.
3)your everyday route is from america to india.
4)you travel per day atleast 345 kms.

1)your name is light.
2)your driving license number is 324.
3)your everyday route is from japan to india.
4)you travel per day atleast 342 kms.

1)your name is rohan.
2)your driving license number is 435.
3)your everyday route is from phune to mumbai.
4)you travel per day atleast 298 kms.

1)your name is rajendra.
2)your driving license number is 283.
3)your everyday route is from village to city.
4)you travel per day atleast 492 kms.*/
