#include<stdio.h>

void main()
{
    int ch,qty;

    printf(":Welcome to PEOPLE'S DINE:\n\nTodays Menu : \n\nno.\t*Food Item*\n1.\tSand-Which\n2.\tBurger\n3.\tFrench-Fries\n4.\tPizza\n5.\tPasta\n\nEnter your Choice(Like 1,2,3,4,5) : ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:

        printf("\nYou ordered Sand-Which\n\nPlease Enter quantity = ");
        scanf("%d",&qty);
        printf("Thank you for choosing us.\n\nYour payable amount is %d/-\n\nVisit Again...",qty*149);
        break;

    case 2:

        printf("\nYou ordered Burger\n\nPlease Enter quantity = ");
        scanf("%d",&qty);
        printf("Thank you for choosing us.\n\nYour payable amount is %d/-\n\nVisit Again...",qty*129);
        break;

    case 3:

        printf("\nYou ordered French-Fries\n\nPlease Enter quantity = ");
        scanf("%d",&qty);
        printf("Thank you for choosing us.\n\nYour payable amount is %d/-\n\nVisit Again...",qty*99);
        break;

    case 4:

        printf("\nYou ordered Pizza\n\nPlease Enter quantity = ");
        scanf("%d",&qty);
        printf("Thank you for choosing us.\n\nYour payable amount is %d/-\n\nVisit Again...",qty*239);
        break;

    case 5:

        printf("\nYou ordered Pasta\n\nPlease Enter quantity = ");
        scanf("%d",&qty);
        printf("Thank you for choosing us.\n\nYour payable amount is %d/-\n\nVisit Again...",qty*179);
        break;

    default:

        printf("Invalid choice.\nPlease Enter numbers between 1 - 5.\nTry Again\nThank you");

    }
}
