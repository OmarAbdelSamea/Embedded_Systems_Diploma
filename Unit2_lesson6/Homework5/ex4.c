#include<stdio.h>

#define NUM_OF_STUDENTS 2

struct SStudnet
{
    char name[256];
    int roll_number;
    float marks;
} students[NUM_OF_STUDENTS];


int main()
{
    int i;
    printf("Enter information of students: \n");

    for (i = 0; i < NUM_OF_STUDENTS; i++)
    {
        printf("for roll number %d: \n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    
    for (i = 0; i < NUM_OF_STUDENTS; i++)
    {
        printf("\nDisplaying Information of students: \n");
        printf("Information for roll number %d: \n", i + 1);
        printf("name: %s \n", students[i].name);
        printf("Marks: %0.2f", students[i].marks);
    }
}