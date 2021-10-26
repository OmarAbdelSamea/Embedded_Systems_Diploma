#include<stdio.h>

struct SStudnet
{
    char name[256];
    int roll_number;
    float marks;
} student;


int main()
{ 
    printf("Enter information of students: \n");

    printf("Enter name: ");
    fgets(student.name, 256, stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nDisplaying Information: \n");
    printf("name: %s", student.name);
    printf("Roll: %d \n", student.roll_number);
    printf("Marks: %0.2f", student.marks);

}