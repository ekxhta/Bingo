# Bingo / Tambola - The Game
This repository contains a simple Bingo game implemented in C++. The game allows users to create their own Bingo card, display it, and play the game by generating random numbers to match against the card.

![bingo](https://github.com/user-attachments/assets/9e933d26-af3a-4aa3-9960-44c7bee122ba)

## Features
- **Create Your Own Card:** Users can input their own numbers to create a custom Bingo card.
- **Display Card:** The current state of the Bingo card is displayed after each move.
- **Random Number Generation:** Random numbers are generated to simulate drawing Bingo numbers.
- **Marking Numbers:** Numbers on the card that match the generated numbers are marked as zero.

## How to Play
**1. Create Your Card:**
- The game will prompt you to enter numbers to create a 5x5 Bingo card.
-  Ensure all numbers are between 1 and 90.
- The center of the card (3rd row, 3rd column) is automatically set to 0 (free space).

   
**2. Display Card:**
- The Bingo card is displayed in a grid format.


**3. Generate Numbers:**
- The game will ask if you want to generate the next Bingo number.
- If you choose 'Y' or 'y', a random number will be generated and checked against your card.
- Matching numbers on the card will be marked as zero.

**4. Repeat:**
- Continue generating numbers until you choose to stop by entering 'N' or 'n'.
