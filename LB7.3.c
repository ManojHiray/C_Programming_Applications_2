/*
3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;

    iMeter = iMeter * iNo; 

    return iMeter;
}

int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d", &iVlaue);

    iRet = KMtoMeter(iVlaue);
    printf("%d", iRet);

    return 0;
}
