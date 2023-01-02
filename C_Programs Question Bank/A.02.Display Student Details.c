/// Write Program to accept student details from user as student Name , Roll Number , Course Name , City . Using Single printf statement....

#include<stdio.h>
#include<conio.h>
int main()
{
        char Name [20];
        int Roll_No = 0;
        char Course [10];
        char City [20];

        printf("\n Enter A Student Details =>  ");

        printf("\n\n\t Enter Student Name =>  ");
        scanf("%s",&Name);
        printf("\n\t Enter Student Roll Number =>  ");
        scanf("%d",&Roll_No);
        printf("\n\t Enter Student Course =>  ");
        scanf("%s",&Course);
        printf("\n\t Enter Student City =>  ");
        scanf("%s",&City);

        getch();
        system("cls");

        printf("\n\t Display Student Details =>  ");

        printf("\n\n\t Student Name => %s",Name);
        printf("\n\t Student Roll Number => %d",Roll_No);
        printf("\n\t Student Course => %s",Course);
        printf("\n\t Student City => %s",City);

        getch();
        return 0;
}
