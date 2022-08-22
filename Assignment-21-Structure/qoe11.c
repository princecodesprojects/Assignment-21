#include<stdio.h>
#include<conio.h>

void f1(int a,int *b)
{
    a=a+*b;
    *b=a-*b;
    a=a-*b;
}
int main()
{
    int x=10,y=20;
   f1(x,&y);
    
    printf("%d %d",x,y);
    return 0;
}