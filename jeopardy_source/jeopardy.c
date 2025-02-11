/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2025, Group 2
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "questions.h"
#include "players.h"
#include "jeopardy.h"


// Put macros or constants here using #define
#define BUFFER_LEN 256
#define NUM_PLAYERS 4

// Put global environment variables here

// Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
void awdtokenize(char *input, char **tokens);

int main()
{
    // An array of 4 players, may need to be a pointer if you want it set dynamically
    player players[NUM_PLAYERS];

    // Input buffer and and commands
    char buffer[BUFFER_LEN] = {0};

    // Display the game introduction and initialize the questions
    initialize_game();
    // initialize each of the players in the array
    // Prompt for players names till all player names are filled
    for (int c = 0; c < NUM_PLAYERS; c++)
    {
        // player enters name
        printf("Enter player %d name: ", c + 1);
        scanf("%255s", players[c].name);
        players[c].score = 0;
    }

    // clear the input buffer
    scanf("%*c");

    // variable to track current player, resets when last player is reached
    int current_player = 0;

    // Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {
        // Call functions from the questions and players source files
        // Tokenize input, extract: category, value
        char *tokens[2] = {NULL, NULL};
        tokenize(buffer, tokens);

        // Check if input valid
        if (tokens[0] == NULL || tokens[1] == NULL)
        {
            printf("Invalid input. Enter category and value.\n");
            continue;
        }
        // Execute the game until all questions are answered
        // Convert value to int
        int value = atoi(tokens[1]);

        // Display chosen question
        display_question(tokens[0], value);

        printf("Enter player name: ");
        char player_name[BUFFER_LEN];
        if (fgets(player_name, BUFFER_LEN, stdin) == NULL)
        {
            printf("Error reading input.\n");
            continue;
        }

        // Ask for answer
        printf("Enter your answer: ");
        char answer[BUFFER_LEN];
        if (fgets(answer, BUFFER_LEN, stdin) == NULL)
        {
            printf("Error reading input.\n");
            continue;
        }

        // Remove new line from answer
        answer[strcspn(answer, "\n")] = '\0';

        player_name[strcspn(player_name, "\n")] = '\0';

        // Check if answer valid
        if (valid_answer(tokens[0], value, answer))
        {
            printf("Correct answer!\n");
            // Update score while tracki8ng player
            update_score(players, NUM_PLAYERS, player_name, value);
        }
        else
        {
            printf("Incorrect answer. Correct answer: %s\n", questions[find_question_index(tokens[0], value)].answer);
        }

        // Mark question answered
        mark_questions_answered(tokens[0], value);

        // Display updates
        display_categories();
        show_results(players, NUM_PLAYERS);
        // Display the final results and exit
        // Check if all questions are answered
        if (all_questions_answered())
        {
            printf("Game over! Here are the results:\n");
            show_results(players, NUM_PLAYERS);
            break;
        }

        current_player = (current_player + 1) % NUM_PLAYERS;
    }
    return EXIT_SUCCESS;
}
