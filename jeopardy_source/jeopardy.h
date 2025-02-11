/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#ifndef JEOPARDY_H_
#define JEOPARDY_H_

#define MAX_LEN 256

// Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
extern void tokenize(char *input, char **tokens)
{
    char *token = strtok(input, " ");
    int i = 0;
    while (token != NULL && i < 2)
    {
        tokens[i++] = token;
        token = strtok(NULL, " ");
    }
}

// Displays the game results for each player, their name and final score, ranked from first to last place
extern void show_results(player *players, int num_players)
{
    // Sort players by score (optional)
    for (int i = 0; i < num_players - 1; i++)
    {
        for (int j = i + 1; j < num_players; j++)
        {
            if (players[i].score < players[j].score)
            {
                player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    // Display results
    printf("Final Results:\n");
    for (int i = 0; i < num_players; i++)
    {
        printf("%d. %s: $%d\n", i + 1, players[i].name, players[i].score);
    }
}

#endif /* JEOPARDY_H_ */
