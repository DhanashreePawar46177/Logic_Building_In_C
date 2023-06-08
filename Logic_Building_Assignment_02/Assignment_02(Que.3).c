///03.Accept On Number From User If Number Is Less Than 10 Then Print "Hello" Otherwise Print "Demo".

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("\n Hello\n");
    }
    else
    {
        printf("\n Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
