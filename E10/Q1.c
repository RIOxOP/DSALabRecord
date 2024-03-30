#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player {
    char name[50];
    char team[50];
    float battingAverage;
    struct Player *next;
};

struct Player* createNewPlayer(char name[], char team[], float battingAverage) {
    struct Player *newPlayer = malloc(sizeof(struct Player));
    if (!newPlayer) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    strcpy(newPlayer->name, name);
    strcpy(newPlayer->team, team);
    newPlayer->battingAverage = battingAverage;
    newPlayer->next = NULL;
    return newPlayer;
}

void insertPlayer(struct Player **head, char name[], char team[], float battingAverage) {
    struct Player *newPlayer = createNewPlayer(name, team, battingAverage);
    newPlayer->next = *head;
    *head = newPlayer;
}

void displayPlayers(struct Player *head) {
    printf("Players with batting average >= 50:\n");
    while (head) {
        if (head->battingAverage >= 50) {
            printf("Name: %s\nTeam: %s\nBatting Average: %.2f\n\n",
                   head->name, head->team, head->battingAverage);
        }
        head = head->next;
    }
}

void freeList(struct Player *head) {
    while (head) {
        struct Player *temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Player *head = NULL;
    int N;
    printf("Enter the number of players: ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        char name[50], team[50];
        float battingAverage;
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: "); scanf("%s", name);
        printf("Team: "); scanf("%s", team);
        printf("Batting Average: "); scanf("%f", &battingAverage);
        insertPlayer(&head, name, team, battingAverage);
    }

    displayPlayers(head);
    freeList(head);

    return 0;
}
