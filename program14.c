//Multiplication table
#include<stdio.h>
void display(int);
int main()
{
    int ivalue=0;
    printf("Enter the Number which display table : ");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}
void display(int ino)
{
    int i=0;
    if(ino==0)
      return;
    
    if(ino<0)
    {
        ino=-ino;
    }
    printf("Multiplication table of %d Number : \n",ino);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",ino,i,ino*i);
    }
}