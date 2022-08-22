#include<stdio.h>
#include<conio.h>
struct employee input();
void display(struct employee y);
struct employee
{
    int id;
    char name[20];
    float salary; 

};

int main()
{
    struct employee y1;
    y1=input();
    display(y1);
    return 0;
}

void display(struct employee y)
{
   printf("\n%d %s %f",y.id,y.name,y.salary);
}


struct employee input()
{
    struct employee y;

    printf("Enter employee id,name and salary\n");
     
    scanf("%d",&y.id);
    fflush(stdin);
    gets(y.name);
    scanf("%f",&y.salary);
    return y;
}