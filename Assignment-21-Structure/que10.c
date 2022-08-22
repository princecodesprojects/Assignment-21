#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
int roll_no;
char name[20];
int chem_marks;
int maths_marks;
int phy_marks;

};

struct student input()
{
struct student s;
printf("Emter student roll Number,name,chemistry marks,Maths marks,physics Marks\n");
scanf("%d",&s.roll_no);
fflush(stdin);
gets(s.name);
scanf("%d",&s.chem_marks);
scanf("%d",&s.maths_marks);
scanf("%d",&s.phy_marks);
return s;
}

void displayPercentage(struct student s)
{
    int marks =s.chem_marks+s.maths_marks+s.phy_marks;
    float percentage=marks/3;
    printf("%d %s %f\n",s.roll_no,s.name,percentage);
}


int main()
{
    struct student s[5];
    int i;

    for(i=0;i<2;i++)
    {
        s[i]=input();
    }

    for(i=0;i<2;i++)
    {
        displayPercentage(s[i]);
    }

}