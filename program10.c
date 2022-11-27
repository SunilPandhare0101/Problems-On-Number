//number is palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool chk_palindrome(int);
int main()
{
    int ivalue=0;
    bool iret=false;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    
    iret=chk_palindrome(ivalue);
    if(iret==true)
    {
        printf("Number is palindrome\n");
    }
    else
    {
     printf("Number is not palindrome\n");
    }
    return 0;
}
bool chk_palindrome(int ino)
{
    int temp=ino;
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
    if(rev==temp)
    {
        return true;
    }
    else
    {
       return false;
    }
}