///Write A Program Swapping Two Number (using Third Variable)
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0,Temp = 0;

    printf("\n Enter First Number =>  ");
    scanf("%d",&No1);
    printf("\n Enter Second Number =>  ");
    scanf("%d",&No2);

    printf("\n\t Number After Swapping No1 = %d,No2  = %d",No1,No2);

    ///Logic
    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n\t Number Before Swapping No1 = %d,No2  = %d",No1,No2);

    getch();
    return 0;
}
