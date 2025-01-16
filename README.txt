# Theater Seat Booking Program

This is a simple C program to simulate a theater seat booking system. The program allows users to book and cancel seats and displays the current seating arrangement.

## Features

- Display the current seating arrangement
- Book a seat
- Cancel a booking
- Display the seating arrangement before and after booking or canceling

## Usage

1. Compile the program using a C compiler:

    ```sh
    gcc -o seat_booking seat_booking.c
    ```

2. Run the compiled program:

    ```sh
    ./seat_booking
    ```

3. Follow the on-screen prompts to display seats, book a seat, or cancel a seat.

## Seating Arrangement

The seating arrangement is represented as a 2D array of characters. Each seat is represented by:
- `O`: Available seat
- `X`: Booked seat

## Menu Options

- **Display seats**: Show the current seating arrangement.
- **Book a seat**: Prompt for row and column numbers to book a seat.
- **Cancel a seat**: Prompt for row and column numbers to cancel a booking.
- **Exit**: Exit the program.

## Example Output

Display seats

Book a seat

Cancel a seat

Exit Enter your choice: 1 Seating arrangement: O O O O O O O O O O O O O O O O O O O O O O O O O

Enter your choice: 2 Enter row number (0-4): 1 Enter column number (0-4): 2 Seat (1, 2) successfully booked.

Enter your choice: 1 Seating arrangement: O O O O O O O X O O O O O O O O O O O O O O O O O

Enter your choice: 3 Enter row number (0-4): 1 Enter column number (0-4): 2 Seat (1, 2) successfully canceled.

Enter your choice: 1 Seating arrangement: O O O O O O O O O O O O O O O O O O O O O O O O O


## License

This program is released under the MIT License. You are free to use, modify, and distribute it.

## Contributing

If you have any suggestions or improvements, feel free to create a pull request or open an issue on the repository.

---

Enjoy using the Theater Seat Booking Program!
