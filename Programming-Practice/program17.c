
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
  
  return( iNo % 2== 0);
    

}
int main()
{
    int iValue = 0;
    bool bRet = false; //0

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
       printf("%d is odd number\n",iValue);  
    }
    printf("Result is :%d\b",bRet);

    return 0;
}