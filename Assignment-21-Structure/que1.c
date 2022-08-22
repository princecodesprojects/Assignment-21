#include<stdio.h>
#include<conio.h>

struct employee
{
    int id;
    char name[20];
    float salary; 

};


int main()
{
    
    struct employee y1={3,"prince",123.4f};
    printf("%d %s %f",y1.id,y1.name,y1.salary);
    return 0;
}