//sum of even numbers
#include<stdio.h>
int sum_even(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    
    iret=sum_even(ivalue);
    printf("sum of Even digit in numbers are %d",iret);
    return 0;
}
int sum_even(int ino)
{
    int idigit=0,sum=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino>0)
    {
        idigit=ino%10;
        if(idigit%2==0)
        {
            sum+=idigit;
        }
        ino=ino/10;

    }
    return sum;
}