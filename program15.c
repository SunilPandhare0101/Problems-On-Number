#include<stdio.h>
#include<math.h>
int display(int,int);
int main()
{
    int x=0,y=0,iret=0;
    printf("Enter the x and y : ");
    scanf("%d %d",&x,&y);

    if(x<0)
    {
        x=-x;
    }
    if(y<0)
    {
        y=-y;
    }
    iret=display(x,y);
    printf("power of %d raised to %d is : %d",x,y,iret);
    return 0;
}
int display(int a,int b)
{
    int power=0;
    power=pow(a,b);
    return power;
}
