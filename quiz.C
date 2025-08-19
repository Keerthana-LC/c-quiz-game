#include <stdio.h>

int main() {
    int answer, score = 0;

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Bangalore\n4. Chennai\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is Delhi.\n");
    }

    // Question 2
    printf("\n2. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is Mars.\n");
    }

    // Question 3
    printf("\n3. Who wrote the play 'Romeo and Juliet'?\n");
    printf("1. William Shakespeare\n2. Charles Dickens\n3. Jane Austen\n4. Mark Twain\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is William Shakespeare.\n");
    }

    // Question 4
    printf("\n4. What is the chemical symbol for water?\n");
    printf("1. CO2\n2. H2O\n3. O2\n4. NaCl\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is H2O.\n");
    }

    // Question 5
    printf("\n5. Which Indian cricketer is known as the 'Master Blaster'?\n");
    printf("1. Virat Kohli\n2. MS Dhoni\n3. Sachin Tendulkar\n4. Rohit Sharma\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong. The correct answer is Sachin Tendulkar.\n");
    }

    // Final Score
    printf("\nYour final score is: %d out of 5\n", score);

    return 0;
}
