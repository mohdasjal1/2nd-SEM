#include <stdio.h>

int main() {
    int num_subjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    float total_marks = 0;

    for (int subject = 1; subject <= num_subjects; ++subject) {
        while (1) {
            float marks;
            printf("Enter marks for Subject %d: ", subject);
            scanf("%f", &marks);

            if (marks >= 0 && marks <= 100) {
                total_marks += marks;
                break;
            } else {
                printf("Invalid input! Marks should be between 0 and 100. Please try again.\n");
                // Clear the input buffer to handle invalid input
                while (getchar() != '\n');
            }
        }
    }

    float average_marks = total_marks / num_subjects;
    printf("\nAverage marks of the student: %.2f\n", average_marks);

    return 0;
}
