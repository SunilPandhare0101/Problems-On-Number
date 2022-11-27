#include<stdio.h>
void display();
int main()
{
    display();

    return 0;
}
void display()
{
    int ino=7521;
    int idigit=0;
  
    while(ino!=0)
    {
    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;
    }
}