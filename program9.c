//Reverse numbers
#include<stdio.h>
int rev_num(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    
    iret=rev_num(ivalue);
    printf("Reverse numbers is : %d",iret);
    return 0;
}
int rev_num(int ino)
{
    int idigit=0,rev=0;
    
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigit=ino%10;
        rev=(rev*10)+idigit;
        ino=ino/10;
    }
    return rev;
}