#include<stdio.h>
void Display(int iNo)
{
    while (iNo>=1)
    {
        printf("*");
        iNo--;
    }
    
}
int main()
{
    int iValue=0;
    printf("ENter Number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}