# Tutorial 4 Jeopardy Game

## Overview
 For this tutorial activity, we were tasked with creating the game show Jeopardy as a command line interactive game. The rules of the game and a high-level overview of the program are included below.
 
As per the project requirements, the users interact with the game via the command line. The users are initialized (a total of 4 players) with their names and a starting balance of $0.  

After the players have been registered, the game will begin. A number of categories will be displayed, with options under the categories ranging from low to high dollar values. The first player that wants to answer will have their name typed, after which they must answer the question. An answer MUST begin with the words “what is” or “who is”, similar to the real Jeopardy game. A correct answer will add the dollar amount associated with the question to their total balance before ending the round, while an incorrect answer will simply end the round. Regardless of answer correctness, a picked question can NOT be used again. The correct answer is displayed at the end of the round after the player’s attempt. 

This game loop is repeated until the question bank is fully exhausted. The player with the highest balance at the end is the winner. 

## Features
- Supports as many players as you want.
- Multiple categories and questions of varying difficulty levels.
- Score tracking for each player.
- Image support for certain questions.
- A scoreboard.
- Support for multiword/space seperated questions.
- Some questions accept multiple answers.

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
