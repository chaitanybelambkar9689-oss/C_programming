
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
//////////////////////////////////////////////////////////////////////////
//
//   Required Header files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
// Function Name: AdditionTwoNumbers 
// Description:   It is used to perform Addition
// Input:         Float,Float
// Output:        Float
// Author:        Chaitany Dilip Belambkar
// Date:          9/10/2025
//////////////////////////////////////////////////////////////////////////



int AdditionTwoNumbers(
                        float fNo1,       //first input
                        float fNo2        //second input
                      ) 
{
    float fSum = 0.0f;                   //To store the result
    
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

    fSum =fNo1+fNo2;                   //Bussiness logic
    return fSum;

}    //End of Addition
//////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////  


int main()
{
  float fValue1 = 0.0f ,fValue2 = 0.0f ;//To accept the result
  float fRet = 0;                       //To store result

  printf("Enter first number:\n");
  scanf("%f",&fValue1);

  printf("Enter Second number:\n");
  scanf("%f",&fValue2);
  
  fRet = AdditionTwoNumbers(fValue1,fValue2); //Method call

  printf("Addition is:%f\n",fRet);    
  return 0;
}  //End of Main
//////////////////////////////////////////////////////////////////////////
// Testcase successfully Handeled by the Application
// Input1 : 10.5  Input2 : 3.2  Output : 13.7
// Input1 : -10.5  Input2 : 3.2  Output : 13.7
// Input1 : 10.5  Input2 : -3.2  Output : 13.7
// Input1 : -10.5  Input2 : -3.2  Output : 13.7
// Input1 : +10.5  Input2 : - 3.2  Output : 13.7
//////////////////////////////////////////////////////////////////////////

   

