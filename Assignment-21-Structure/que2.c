#include<stdio.h>
#include<conio.h>
void input();
struct employee
{
    int id;
    char name[20];
    float salary; 

};

int main()
{
    input();
    return 0;
}

void input()
{
    struct employee y;

    printf("Enter employee id,name and salary\n");
     
    scanf("%d",&y.id);
    fflush(stdin);
    gets(y.name);
    scanf("%f",&y.salary);

}