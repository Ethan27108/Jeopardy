# Tutorial 4 Jeopardy Game

## Overview
This is a simple command-line-based Jeopardy game implemented in C for the SOFE 3950U / CSCI 3020U: Operating Systems course. The game allows multiple players to take turns selecting and answering trivia questions from different categories, earning points based on correct responses. The game keeps track of players scores and displays everyones at the end of each round

## Features
- Supports as many players as you want.
- Multiple categories and questions of varying difficulty levels.
- Score tracking for each player.
- Image support for certain questions.
- A scoreboard.

## How to Play
1. Compile the program using a C compiler (e.g., GCC).
2. Run the executable.
3. Enter the names of up to 4 players.
4. Players take turns selecting a category and a point value.
5. The game displays a question, then any player enters their name then thier response in the format:
   - "What is [answer]" or "Who is [answer]"
6. The game validates the response and updates the player's score.
7. The game continues until all questions are answered.
8. The final scores are displayed, and the winner is determined.

## Compilation & Execution
### Compiling the Game
Use `gcc` to compile the game:
```sh
gcc jeopardy.c questions.c -o jeopardy
```
or use the make file:

run `make` on linux or `mingw32-make` on windows

### Running the Game
Execute the compiled file:
```sh
./jeopardy.exe
```

## File Structure
- `jeopardy.c` - Main game logic, handles user input and game flow.
- `questions.c` - Stores and manages game questions and categories.
- `players.c` - Defines player structure and score management functions.

## Dependencies
- Standard C libraries (`stdio.h`, `stdlib.h`, `string.h`, `stdbool.h`)
- `xdg-open` for image opening support
## Known Issues
- The game assumes input is correctly formatted and does not validate certain user errors.
- Requires a system that supports opening images with `xdg-open` (Linux/macOS specific).
- the game is case sensitive and categories must be selected with capitals (e.g. Fast-Food, not fast-food)
- 
