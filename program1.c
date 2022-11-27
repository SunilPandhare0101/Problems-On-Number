#include<stdio.h>
void display();
int main()
{
    display();

    return 0;
}
void display()
{
    int ino=75.21;
    int idigit=0;
   
    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;

    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;

    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;

     idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;

}