///02.Program To Print 5 Times "Marvellous" On Screen

#include<stdio.h>
#include<conio.h>

void Display()
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("\n Marvellous\n");
    }
}

int main()
{
    Display();

    getch();
    return 0;
}

