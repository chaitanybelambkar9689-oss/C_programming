// 5 4 3 2 1 0
#include<stdio.h>

void Table(int iNo,int iStop)
{
 int iCnt = 0;
 int iTable = 0;
 for(iCnt = 1; iCnt <=iStop ;iCnt++)
 {
    iTable = iNo * iCnt;
    printf("%d\t",iTable);
 }
}
int main()
{
    int iTable  = 0;
    int iSize = 0;

    printf("Please enter table:\n");
    scanf("%d",&iTable);

    printf("Enter the  size of the table : \n");
    scanf("%d",&iSize);

    Table(iTable,iSize);

    return 0;
}