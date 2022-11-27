//sum of digits
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
    if(ino<0)
    {
        ino=-ino;
    }
    
    int sum=0;
    int idigit=0;
  
    while(ino!=0)
    {
      idigit=ino%10;
      sum+=idigit;
      ino=ino/10;
    }
     return sum;
}