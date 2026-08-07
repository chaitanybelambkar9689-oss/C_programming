////////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>  //For Input output
#include<stdbool.h> //for Bool datatype
////////////////////////////////////////////////////////////////////////////////
//
//function name: CheckEvenOdd
//Description:   It is use to check even or odd
//Input      :
//output     :
//Author Name:    

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {return true;}
    else
    {return false; }
}
int main()

////////////////////////////////////////////////////////////////////////////////
//
//
// Entry point  function
//
//
////////////////////////////////////////////////////////////////////////////////
{
    int iValue = 0;
    bool bRet = false; //0

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {printf("%d is Even number\n",iValue);}
    else
    {printf("%d is odd number\n",iValue);  }
    printf("Result is :%d\b",bRet);

    return 0;
}