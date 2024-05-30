#include <stdio.h>

// Function prototypes
float calculateAverage(int Physics, int Chemistry, int Biology, int Math);
void studentAssessment(float Average); 

int main() {
    int Physics, Chemistry, Biology, Math;
    float Average;

    // User prompt
    printf("Enter the Physics marks: ");
    scanf("%d", &Physics);
    printf("Enter the Chemistry marks: ");
    scanf("%d", &Chemistry);
    printf("Enter the Biology marks: ");
    scanf("%d", &Biology);
    printf("Enter the Math marks: ");
    scanf("%d", &Math);

    Average = calculateAverage(Physics, Chemistry, Biology, Math);
    
    printf("The Physics marks is: %d \n", Physics);
    printf("The Chemistry marks is: %d \n", Chemistry);
    printf("The Biology marks is: %d \n", Biology);
    printf("The Math marks is: %d \n", Math);
    printf("The average is: %.2f \n", Average); 

    studentAssessment(Average);

    return 0;
}

float calculateAverage(int Physics, int Chemistry, int Biology, int Math) {
    return (Physics + Chemistry + Biology + Math) / 4.0; 
}

void studentAssessment(float Average) { 
    if (Average >= 50) {
        printf("Student is promoted\n");
    } else if (Average < 50) {
        printf("Student is demoted\n");
    }
}