#include <stdio.h>

int main() {
    int t1, t2, t3, t4;

    printf("Enter the duration of task 1: ");
    scanf("%d", &t1);
    printf("Enter the duration of task 2: ");
    scanf("%d", &t2);
    printf("Enter the duration of task 3: ");
    scanf("%d", &t3);
    printf("Enter the duration of task 4: ");
    scanf("%d", &t4);

    // Assume max time is the first task's duration
    int max_time = t1;

    // Check if any other task takes longer
    if (t2 > max_time) max_time = t2;
    if (t3 > max_time) max_time = t3;
    if (t4 > max_time) max_time = t4;


    printf("Total time to complete all tasks: %d\n", max_time);

    return 0;
}
