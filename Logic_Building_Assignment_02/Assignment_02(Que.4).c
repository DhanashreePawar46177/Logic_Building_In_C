/// 04. Accept Two Numbers From User And Display First Number In Second Number Of Times.

#include<stdio.h>
#include<conio.h>

int Display(int iNo,int iFrequency)
{
    int No = 0;

    for(No = 1; No <= iFrequency; No++)
    {
        printf(" %d ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    printf("\n Enter Frequency = ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    getch();
    return 0;
}
