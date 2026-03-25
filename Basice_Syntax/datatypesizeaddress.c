int main()
{
    char cValue ='S';
    int iValue =11;
    float fValue = 90.78f;
    double dValue = 98.2345;
    printf("size of character is : %lu\n",sizeof(cValue));//1
    printf("size of integer is: %lu\n",sizeof(iValue));//4
    printf("size of float is : %lu\n",sizeof(fValue));//4
    printf("size of double is : %lu\n",sizeof(dValue));//8

    
    printf("Address of cValue is :%lu\n",&cValue);//100 to 101 
    printf("Address of iValue is :%lu\n",&iValue);//200 to 204
    printf("Address of fValue is :%lu\n",&fValue);//300 to 304
    printf("Address of dValue is :%lu\n",&dValue);//400 to 408
    return 0;
}