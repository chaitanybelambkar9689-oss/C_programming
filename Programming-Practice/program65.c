// iteration

#include<stdio.h>

int main()
{
    int iNo = 72361;
    int iDigit = 0;
   

    
    printf("------------------------------------\n");
    printf("Original value of iNo is :%d\n",iNo);

    while (iNo != 0) 
    {
    printf("------------------------------------\n");
    iDigit = iNo % 10 ;
    printf("iDigit is: %d\n",iDigit);
    printf("%d\n",iNo);
    iNo = iNo/10; 
    }   

   

    printf("------------------------------------\n");
   

    return 0;
}
