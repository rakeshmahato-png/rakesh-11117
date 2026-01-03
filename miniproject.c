#include <stdio.h>

int main() {
     printf(" \n\n\n****** RUNGTA INTERNATIONAL SKILLS UNIVERSITY ATTENDENCE SYSTEM**********\n\n");
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);


    int attendance[numStudents];
    int presentCount = 0; 
    int absentCount = 0; 

    
    printf("Enter attendance (1 for Present, 0 for Absent):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }

    
    printf("\n--- Attendance Record ---\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %s\n", i + 1, (attendance[i] == 1) ? "Present" : "Absent");
        
        
        if (attendance[i] == 1) {
            presentCount++;
        } else {
            absentCount++;
        }
    }

    
    printf("\nTotal Present: %d", presentCount);
    printf("\nTotal Absent: %d\n", absentCount);



    printf("\nThank You !\n\n");

    return 0;
}