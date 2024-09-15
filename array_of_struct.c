#include<stdio.h>
#include<string.h>


struct student
{
    char name [15];
    float gpa;
};


int main(int argc, char const *argv[])
{

    struct student user1 = {"amit",3.7};
    struct student user2 = {"ankit",3.7};
    struct student user3 = {"thandup",3.0};
    struct student user4 = {"balram",3.0};
    struct student user5 = {"umesh",3.5};


    // creating a array of structs

    struct student users [] = {user1, user2, user3, user4, user5};

    for (int i = 0; i < sizeof(users)/sizeof(users[0]); i++)
    {
        printf("name: %-15s\t",users[i].name);
        printf("gpa: %.2f\n",users[i].gpa);
    }
    


    return 0;
}
