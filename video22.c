

/// ___________________EXERCISE 2_________________

/* make a simple C programe to calulate kms to miles
inches to foot
cms to inches
pounds to kgs
rs to dollar at same time*/
// units and conversions

#include <stdio.h>
int main()
{
    float kms, inches, cms, pounds, rs;
    float miles, foot, kgs, dollar;

    int choice;

start:

    printf("******if you want to perform : ******\nkms to miles click 1\ninches to foot click on 2\ncms to inches click on 3\npounds to kgs click on 4\nrs to dollar click on 5\nif you want to quit click on 6.\n");

    printf("enter you choice :\n");
    scanf("%d", &choice);

    // printf("you have take %d as your option so i will perform %d for you", );

    switch (choice)
    {
    case 1:
        printf("you have choosen option 1 so i will perform kms to miles conversion for you\n");
        break;
    case 2:
        printf("you have choosen option 2 so i will perform nches to foot conversion for you\n");
        break;
    case 3:
        printf("you have choosen option 3 so i will perform cms to inches conversion for you\n");
        break;
    case 4:
        printf("you have choosen option 4 so i will perform pounds to kgs conversion for you\n");
        break;
    case 5:
        printf("you have choosen option 5 so i will perform rs to dollar conversion for you\n");
        break;
    case 6:
        printf("thanks for using NRG's conversions. \n");
        // break;
        return 0;

    default:
        printf("sorry you have written wrong option number you can only pick from 1 to 6 only in order to perform conversion\n\n");
        break;
    }

    // *******float kms, inches, cms, pounds, rs;*****
    // ********float miles, foot, kgs, dollar;************
    if (choice < 2 && choice > 0)
    {
        printf("enter the value in order to perform kilometer into miles :\n");
        scanf("%f", &kms);
        miles = kms * 0.621371; // 1 km = 0.621371 mile

        printf("____the conversion of %0.2f km = %0.2f miles___\n\n", kms, miles);
    }

    else if (choice < 3 && choice > 1)
    {
        printf("enter the value in order to perform inches into foot :\n");
        scanf("%f", &inches);
        foot = inches * 12; // 1 inch = 12 foot

        printf("____the conversion of %0.2f inches = %0.2f foot___\n\n", inches, foot);
    }
    else if (choice < 4 && choice > 2)
    {
        printf("enter the value in order to perform cm into inches :\n");
        scanf("%f", &cms);
        inches = cms * 0.393701; // 1 cm = 0.393701 inch

        printf("____the conversion of %0.2f cm = %0.2f inches___\n\n", cms, inches);
    }
    else if (choice < 5 && choice > 3)
    {
        printf("enter the value in order to perform pounds into kg :\n");
        scanf("%f", &pounds);
        kgs = pounds * 0.453592; // 1 pound = 0.453592 kg

        printf("____the conversion of %0.2f pound = %0.2f kg___\n\n", pounds, kgs);
    }
    else if (choice < 6 && choice > 4)
    {
        printf("enter the value in order to perform dollar into rupes :\n");
        scanf("%f", &dollar);
        rs = dollar * 83.09; // 1 km = 0.621371 mile

        printf("____the conversion of %0.2f dollar = %0.2f ruppes\n\n", dollar, rs);
    }

    // else
    // {
    //     printf("you have entered wrong number you can only put numbers form 1 to 6\n\n");
    // }

    goto start;

    return 0;
}