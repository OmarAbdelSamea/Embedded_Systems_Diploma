#include<stdio.h>

typedef struct
{
    int feet;
    float inch;
} SDistance;

SDistance add_two_distance(SDistance * dist1, SDistance * dist2)
{
    SDistance sum;
    sum.inch = dist1->inch + dist2->inch;
    sum.feet = dist1->feet + dist2->feet; 

   // convert inches to feet if greater than 12
   while (sum.inch >= 12.0) {
      sum.inch = sum.inch - 12.0;
      ++sum.feet;
   }
    return sum;
}

int main()
{
    SDistance dist1, dist2, sum;
    printf("Enter information for 1st distance  \n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("Enter information for 2nd distance  \n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    sum = add_two_distance(&dist1, &dist2);
    printf("Sum if distances: %d'-%0.1f\"", sum.feet, sum.inch);
}