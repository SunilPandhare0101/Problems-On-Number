//perfect number (using 3 functions)
#include<stdio.h>
#include<stdbool.h>
int sumfactor(int);
bool chk_perfect(int);
int main()
{
    int ivalue=0;
    bool bret=false;
    printf("Enter the number : ");
    scanf("%d",&ivalue);
    bret=chk_perfect(ivalue);
    if(bret==true)
    {
        printf("Number is perfect\n");
    }
    else
    {
       printf("Number is not perfect\n");
    }
    return 0;
}
bool chk_perfect(int inumber)
{
    int ifactor=0;
    if(inumber<0)
    {
      inumber=-inumber;
    }
    ifactor=sumfactor(inumber);
    if(ifactor==inumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int sumfactor(int ino)
{
    int isum=0,icnt=0;

    for(icnt=1;icnt<=(ino/2);icnt++)
    {
        if((ino%icnt)==0)
        {
            isum+=icnt;
        }
    }
    return isum;
}