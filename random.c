#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to conduct the lucky draw
void luckyDraw(char participants[][50], int numParticipants) {
    srand(time(0)); // Seed the random number generator with the current time
    int winnerIndex = rand() % numParticipants; // Generate a random index
    printf("Congratulations! The winner is: %s\n", participants[winnerIndex]);
}

int main() {
    int numParticipants;

    // Ask the user for the number of participants
    printf("Enter the number of participants: ");
    scanf("%d", &numParticipants);

    char participants[numParticipants][50]; // Array to store participants' names

    // Get participants' names
    printf("Enter the names of the participants:\n");
    for (int i = 0; i < numParticipants; i++) {
        printf("Participant %d: ", i + 1);
        scanf("%s", participants[i]);
    }

    // Conduct the lucky draw
    luckyDraw(participants, numParticipants);

}

