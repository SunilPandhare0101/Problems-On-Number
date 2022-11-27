//count even numbers
#include<stdio.h>
int count_even(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    
    iret=count_even(ivalue);
    printf("Numbers of Even numbers are %d",iret);
    return 0;
}
int count_even(int ino)
{
    int idigit=0,count=0;
    if(ino<0)
    {
        ino=-ino;
    }

    if(ino==0)
    {
        return 1;
    }

    while(ino>0)
    {
        idigit=ino%10;
        if(idigit%2==0)
        {
            count++;
        }
        ino=ino/10;

    }
    return count;
}