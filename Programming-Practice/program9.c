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
    if input is negative then it convert into positive
    perform Addition of no1 and no2
    Display the Addition on screen
STOP



*/
#include<stdio.h>

int AdditionTwoNumbers(float fNo1,float fNo2) 
{
    float fSum = 0.0f;
    
    //Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    //Updator
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum =fNo1+fNo2;   //Bussiness logic
    return fSum;

}
int main()
{
  float fValue1 = 0 ,fValue2 = 0 ,fRet = 0;

  printf("Enter first number:\n");
  scanf("%f",&fValue1);

  printf("Enter Second number:\n");
  scanf("%f",&fValue2);
  
  fRet = AdditionTwoNumbers(fValue1,fValue2);

  printf("Addition is:%f\n",fRet);
  return 0;
} 