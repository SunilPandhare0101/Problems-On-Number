//split number
#include<stdio.h>
void display(int);
int main()
{
    int ivalue=0;
    printf("Enter Number : ");
    scanf("%d",&ivalue);
    display(ivalue);

    return 0;
}
void display(int ino)
{
    int idigit=0;
  
    while(ino!=0)
    {
    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;
    }
}