#include<stdio.h>
#include<conio.h>

struct employee
{
    int id;
    char name[20];
    float salary; 

};

struct employee input()
{
    struct employee y;
    int i;
    

        printf("Enter employee id,name and salary\n");
        scanf("%d",&y.id);
        fflush(stdin);
        gets(y.name);
        scanf("%f",&y.salary);
   
    return y;
}

void display(struct employee y)
{
    printf("\n%d %s %f",y.id,y.name,y.salary);
}

struct employee sortBysalary(struct employee y[],int size)

{
    int i,r;
    struct employee temp;
    for(r=1;r<size-1;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
           if(y[i].salary>y[i+1].salary)
           {
            temp=y[i];
            y[i]=y[i+1];
            y[i+1]=temp;
           }
        }
    }
}
int main()
{
    struct employee y[3];
    int i;
    for(i=0;i<3;i++)
    {
        y[i]=input();
    }
    
        sortBysalary(y,3);
    

    

    for(i=0;i<3;i++)
    {
        display(y[i]);
    }
    
    return 0;
}