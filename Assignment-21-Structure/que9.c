#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
int id;
char name[20];
int class;

};

struct student input()
{
struct student s;
printf("Emter student id,name,class\n");
scanf("%d",&s.id);
fflush(stdin);
gets(s.name);
scanf("%d",&s.class);
return s;
}

void display(struct student s)
{
    printf("%d %s %d\n",s.id,s.name,s.class);
}


int main()
{
    struct student s[10];
    int i,n;
    printf("How many students data you want to store\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s[i]=input();
    }

    for(i=0;i<n;i++)
    {
        display(s[i]);
    }

}