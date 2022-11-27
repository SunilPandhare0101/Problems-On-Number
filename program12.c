//perfect number
#include<stdio.h>
#include<stdbool.h>
bool display(int);
int main()
{
    int ivalue=0;
    bool iret=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    if(iret==true)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Number is not perfect\n");
    }
    return 0;
}
bool display(int ino)
{
    int i=0,sum=0;
    if(ino<0)
    {
        ino=-ino;
    }
    for(i=1;i<=ino/2;i++)
    {
      if(ino%i==0)
      {
          sum+=i;
      }
    }
    if(ino==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}