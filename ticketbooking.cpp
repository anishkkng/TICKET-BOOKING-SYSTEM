#include <stdio.h>
#include <string.h>
#define ROWS 5
#define COLS 5
void displaySeats(char seats[ROWS][COLS]);
void bookSeat(char seats[ROWS][COLS], int row, int col);
void cancelSeat(char seats[ROWS][COLS], int row, int col);
int main() {
    char seats[ROWS][COLS];
    memset(seats, 'O', sizeof(seats)); // Initialize all seats to 'O' (available)
	int choice, row, col;
	while (1){
        printf("\n1. Display seats\n2. Book a seat\n3. Cancel a seat\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		switch(choice){
            case 1:
                displaySeats(seats);
                break;
            case 2:
                printf("Enter row number (0-%d): ", ROWS - 1);
                scanf("%d", &row);
                printf("Enter column number (0-%d): ", COLS - 1);
                scanf("%d", &col);
                bookSeat(seats, row, col);
                break;
            case 3:
                printf("Enter row number (0-%d): ", ROWS - 1);
                scanf("%d", &row);
                printf("Enter column number (0-%d): ", COLS - 1);
                scanf("%d", &col);
                cancelSeat(seats, row, col);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
	return 0;
}
void displaySeats(char seats[ROWS][COLS]) {
    printf("Seating arrangement:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
}
void bookSeat(char seats[ROWS][COLS], int row, int col) {
    if (seats[row][col] == 'O') {
        seats[row][col] = 'X';
        printf("Seat (%d, %d) successfully booked.\n", row, col);
    } else {
        printf("Seat (%d, %d) is already booked.\n", row, col);
    }
}
void cancelSeat(char seats[ROWS][COLS], int row, int col) {
    if (seats[row][col] == 'X') {
        seats[row][col] = 'O';
        printf("Seat (%d, %d) successfully canceled.\n", row, col);
    } else {
        printf("Seat (%d, %d) is already available.\n", row, col);
    }
}

