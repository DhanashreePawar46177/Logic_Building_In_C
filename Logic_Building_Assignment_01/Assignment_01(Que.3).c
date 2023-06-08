///03.Program To Print 5 To 1 Numbers On Screen.

#include<stdio.h>
#include<conio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("\n %d ",i);
        i--;
    }
}

int main()
{
    Display();

    getch();
    return 0;
}
