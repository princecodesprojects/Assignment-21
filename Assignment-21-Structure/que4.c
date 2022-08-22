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

void highestSalary (struct employee y[],int size)
{
    int i,j;
    float  highest;
    highest=y[0].salary;

    for(i=1;i<size;i++)
    {
        if(y[i].salary>highest)
        {
            highest=y[i].salary;
        }
    }

    printf("%f",highest);
}

int main()
{
    struct employee y[5];
    int i;
    for(i=0;i<3;i++)
    {
        y[i]=input();
    }

    highestSalary ( y,3);

    // for(i=0;i<5;i++)
    // {
    //     display(y[i]);
    // }
    
    return 0;
}