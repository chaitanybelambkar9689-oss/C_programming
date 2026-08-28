//Input:12  2 output:true
//Input:12  3 output:true
//Input:12  5 output:false
//Input:12  12 output:true
//Input:12  7 output:true
#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    if(bRet == true)
    
    {
        printf("It is completely divisible \n");
    }
    else
     {
        printf("It is not completely divisible \n");
     } 


    
    bRet = CheckDivisible(iValue1,iValue2);
   
    return 0;
}