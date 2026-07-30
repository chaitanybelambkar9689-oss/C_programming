/*
step1:understand the problem statement
step2:write a algorithm
step3:decide the program language
step4:Write the program
step5:test the program
*/
/*
Algorithm

START
    Accept first no as no1
    Accept second no as no2
    perform Addition of no1 and no2
    Display the Addition on screen
STOP



*/
#include<stdio.h>

int AdditionTwoNumbers(float fNo1,float fNo2) 
{
    float fSum = 0.0f;
    fSum =fNo1+fNo2;   //Bussiness logic
    return fSum;

}
int main()
{
  float fValue1 = 0.0f ,fValue2 = 0.0f,fRet = 0.0f;

  printf("Enter first number:\n");
  scanf("%f",&fValue1);

  printf("Enter Second number:\n");
  scanf("%f",&fValue2);
  
  fRet = AdditionTwoNumbers(fValue1,fValue2);

  printf("Addition is:%d\n",fRet);
  return 0;
} 