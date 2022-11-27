#include<stdio.h>
#include<math.h>
int display(int,int);
int main()
{
    int x=0,y=0,iret=0;
    printf("Enter the x and y : ");
    scanf("%d %d",&x,&y);
    iret=display(x,y);
    printf("power of %d raised to %d is : %d",x,y,iret);
    return 0;
}
int display(int a,int b)
{
     if(a<0)
    {
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }
    int mult=1;
    for(int i=1;i<=b;i++)
    {
        mult=mult*a;
    }
    return mult;
}
