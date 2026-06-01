#include <studio.h>
#include <sting.h>
#include <ctype.h>

#define Num_students 5
#define NUM_TESTS 13

int main () {
  char names [NUM_STUDENTS] [11];
  int scores [NUM_STUDENTS] [NUM_TESTS];

// Read input
for (int i = 0; i <NUM_STUDENTS; i++) {
    scanf("10%s",names[i];
    for (int j = 0; j < NUM_TESTS; j++) {
            scanf("%d", &scores[i][j]);
        }
    }
 
    // Compute average per student
    double averages[NUM_STUDENTS];
    double groupTotal = 0.0;
 
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < NUM_TESTS; j++) {
            sum += scores[i][j];
        }
        averages[i] = (double)sum / NUM_TESTS;
        groupTotal += averages[i];
    }
 
    double groupAverage = groupTotal / NUM_STUDENTS;
 
    // Capitalize first letter of each name
    for (int i = 0; i < NUM_STUDENTS; i++) {
        names[i][0] = toupper(names[i][0]);
        for (int j = 1; names[i][j] != '\0'; j++) {
            names[i][j] = tolower(names[i][j]);
        }
    }
 
    // Find student with highest average
    int bestIdx = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (averages[i] > averages[bestIdx]) {
            bestIdx = i;
        }
    }
 
    // Print student with highest average
    printf("%s\n", names[bestIdx]);
 
    // Print students below group average
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (averages[i] < groupAverage) {
            printf("%s\n", names[i]);
        }
    }
 
    return 0;
}
 
