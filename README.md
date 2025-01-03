# Bucket of Luck

## Duration: February 2022 - March 2022

## Overview
Bucket of Luck is a console-based dice game developed in C. It replicates a betting environment where players wager on dice roll outcomes, combining strategy and chance. The game features robust logic, animated text-based visuals, and an interactive narrative, providing a dynamic gaming experience.

---

## Features
- **Dynamic Dice Rolling Simulation**: Utilizes random number generation to mimic realistic dice rolls, ensuring unpredictable outcomes for each session.
- **Interactive Betting System**: Allows players to place bets on individual dice numbers or ranges of sums, with varying odds and payouts.
- **Animated Text-Based Visuals**: Features animated console visuals for dice rolls and game transitions to enhance engagement.
- **Robust Game Logic**: Implements input validation, control structures, and state management for fair and stable gameplay.

---

## How It Works
### Game Setup
- Players begin with a set amount of virtual currency for betting.
- They can choose to bet on:
  - Specific dice outcomes.
  - The sum of dice rolls falling within a range.
  
### Dice Rolling
- Dice rolls are generated using a random number generator.
- Visual animations in the console simulate the rolling process.

### Betting and Payouts
- Players wager on their predictions.
- Correct guesses yield payouts based on predefined odds.
- Incorrect bets deduct the wagered amount from the player’s currency.

### Game Loop
- The game continues until the player chooses to exit or depletes their currency.
- Scores are tracked, and players can restart a session to try their luck again.

---

## Requirements
- A C compiler (e.g., GCC)
- Basic console interface

---

## How to Compile and Run
1. Clone the repository or download the source files.
2. Compile the program:
   ```bash
   gcc -o bucket_of_luck bucket_of_luck.c
