//count digits
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0,result=0;
    printf("Enter Number : ");
    scanf("%d",&ivalue);
    result=display(ivalue);
    printf("Addition is : %d",result);
    return 0;
}
int display(int ino)
{
    int count=0;
    int idigit=0;

    if(ino<0)
    {
        ino=-ino;
    }
   
    if(ino==0)
    {
        return 1;
    }

    while(ino!=0)
    {
      idigit=ino%10;
      count++;
      ino=ino/10;
    }
     return count;
}