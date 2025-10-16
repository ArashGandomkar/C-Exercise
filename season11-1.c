#include <stdio.h>
#include <stdlib.h>
typedef struct
    {
        int id;
        char *firstName;
        char *lastName;
        float pga;
    }Student; /*Another Way --> stu1;
         struct student stu1 = {421,"Arash","Gk",15.96}*/
    void displayInformation(Student stu);
    void displayInformation2(Student *stu);
int main()
{
    Student stu1;
    stu1.id = 421;
    stu1.firstName = "Arash";
    stu1.lastName = "Gk";
    stu1.pga = 15.96;

    Student stu2 = {421,"Arash","Gk",15.96};

    printf("Using Func1(By Value)...\n");
    displayInformation(stu1);
    displayInformation(stu2);
    displayInformation(stu1);

    printf("_____________________________________________________________________\n");

    printf("Using Func2(By Refrence)...\n");
    displayInformation2(&stu1);
    displayInformation2(&stu2);
    displayInformation2(&stu1);
}

void displayInformation(Student stu)
{
    printf("Id Number is: %d\n",stu.id);
    printf("FirstName is: %s\n",stu.firstName);
    printf("LastName is: %s\n",stu.lastName);
    printf("PGA is: %f\n",stu.pga);
    stu.id+=1000;
    printf("New Id: %d\n",stu.id);
    printf("\n");
}

void displayInformation2(Student *stu)
{
    printf("Id Number is: %d\n",stu->id);
    printf("FirstName is: %s\n",stu->firstName);
    printf("LastName is: %s\n",stu->lastName);
    printf("PGA is: %f\n",stu->pga);
    stu->id+=1000;
    printf("New Id: %d\n",stu->id);
    printf("\n");
}