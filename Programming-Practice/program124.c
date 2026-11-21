#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iSize ;iCnt++)
    {
    printf("%d",Arr[iCnt]);

    }
}
int main()
{
   int iLength = 0, iCnt =0;
   int *ptr =NULL;
   
   printf("enter the number of elements : ");
   scanf("%d\n",&iLength); //5

   ptr =(int*) malloc(iLength * sizeof(int));

   if(ptr == NULL)
   {
    printf("Unable to allocate the memory \n");
    return -1;
   }
   printf("Enter the elements : \n");
   
   for(iCnt = 0; iCnt<iLength ;iCnt++)
   {
    scanf("%d",&ptr[iCnt]);
   }

   Display(ptr,iLength);

   free(ptr);

   return 0;
}