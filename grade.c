#include<stdio.h>

void main()
{
    float mrk;

    printf(":Enter your marks to get your grade:\n\nnote:You can Enter your marks with precision of two decimal digits\n\nEnter your marks : ");
    scanf("%f",&mrk);

    if(mrk >=85.00 && mrk <=100.00)
    {
        printf("\nCongratulations you get A Grade\n");
    }
    else if(mrk >=70.00 && mrk <=84.99)
    {
        printf("\nCongratulations you get B Grade\n");
    }
    else if(mrk >=55.00 && mrk <=69.99)
    {
        printf("\nCongratulations you get c Grade\n");
    }
    else if(mrk >=40.00 && mrk <=54.99)
    {
        printf("\nCongratulations you get D Grade\n");
    }
    else if(mrk >=0.00 && mrk <=39.99)
    {
        printf("\nSorry you get F Grade\n");
    }
    else if(mrk >= 100.00 || mrk <= 0.00)
    {
        printf("\nInvalid Marks");
    }
}
