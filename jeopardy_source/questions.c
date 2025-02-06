#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"

// Initializes the array of questions for the game
void initialize_game(void)
{
    // Anime category
    strcpy(questions[0].category, "Anime");
    strcpy(questions[0].question, "What is the name of one of the big three animes?");
    strcpy(questions[0].answer, "bleach/onepiece/naruto");
    questions[0].value = 100;
    questions[0].answered = false;
    strcpy(questions[0].image, ""); // No image for this question

    strcpy(questions[1].category, "Anime");
    strcpy(questions[1].question, "What is the name of the powers people get in my hero academia?");
    strcpy(questions[1].answer, "quirks");
    questions[1].value = 200;
    questions[1].answered = false;
    strcpy(questions[1].image, ""); // No image for this question

    strcpy(questions[2].category, "Anime");
    strcpy(questions[2].question, "What Pokémon is this picture of gengar?");
    strcpy(questions[2].answer, "gengar");
    questions[2].value = 300;
    questions[2].answered = false;
    strcpy(questions[2].image, "assets/gengar.png"); // Path to gengar image

    strcpy(questions[3].category, "Anime");
    strcpy(questions[3].question, "What is the name of this anime character? Picture of Nobara");
    strcpy(questions[3].answer, "nobara");
    questions[3].value = 400;
    questions[3].answered = false;
    strcpy(questions[3].image, "assets/nobara.jpg"); // Path to Nobara image

    strcpy(questions[4].category, "Anime");
    strcpy(questions[4].question, "What is the name of the tallest titan in attack on titan?");
    strcpy(questions[4].answer, "collosal titan");
    questions[4].value = 500;
    questions[4].answered = false;
    strcpy(questions[4].image, ""); // No image for this question

    // Video games category
    strcpy(questions[5].category, "Video Game");
    strcpy(questions[5].question, "What video game is this? (Cod bo3 game case)");
    strcpy(questions[5].answer, "Cod bo3");
    questions[5].value = 100;
    questions[5].answered = false;
    strcpy(questions[5].image, "assets/BO3.jpg"); // Path to Cod bo3 image

    strcpy(questions[6].category, "Video Game");
    strcpy(questions[6].question, "What video game is this? (Super mario oddysey game case)");
    strcpy(questions[6].answer, "Super mario oddysey");
    questions[6].value = 200;
    questions[6].answered = false;
    strcpy(questions[6].image, "assets/Odyssey.jpg"); // Path to Super Mario Odyssey image

    strcpy(questions[7].category, "Video Game");
    strcpy(questions[7].question, "What video game is this? (Seige game case)");
    strcpy(questions[7].answer, "Rainbow six seige");
    questions[7].value = 300;
    questions[7].answered = false;
    strcpy(questions[7].image, "assets/Seige.jpg"); // Path to Seige image

    strcpy(questions[8].category, "Video Game");
    strcpy(questions[8].question, "What video game is this? (forza game case)");
    strcpy(questions[8].answer, "forza5");
    questions[8].value = 400;
    questions[8].answered = false;
    strcpy(questions[8].image, "assets/forza5.jpg"); // Path to Forza image

    strcpy(questions[9].category, "Video Game");
    strcpy(questions[9].question, "What video game is this? (elder ring case)");
    strcpy(questions[9].answer, "elden ring");
    questions[9].value = 500;
    questions[9].answered = false;
    strcpy(questions[9].image, "assets/eldenring.png"); // Path to Elder Ring image

    // Aquatic animal category
    strcpy(questions[10].category, "Aquatic Animal");
    strcpy(questions[10].question, "What is the largest animal?");
    strcpy(questions[10].answer, "blue whale");
    questions[10].value = 100;
    questions[10].answered = false;
    strcpy(questions[10].image, ""); // No image for this question

    strcpy(questions[11].category, "Aquatic Animal");
    strcpy(questions[11].question, "What animal makes water rings are plays with them?");
    strcpy(questions[11].answer, "dolphin");
    questions[11].value = 200;
    questions[11].answered = false;
    strcpy(questions[11].image, ""); // No image for this question

    strcpy(questions[12].category, "Aquatic Animal");
    strcpy(questions[12].question, "How many hearts does an octopus have?");
    strcpy(questions[12].answer, "3");
    questions[12].value = 300;
    questions[12].answered = false;
    strcpy(questions[12].image, ""); // No image for this question

    strcpy(questions[13].category, "Aquatic Animal");
    strcpy(questions[13].question, "What can regenerate its arms if they are cut off?");
    strcpy(questions[13].answer, "starfish");
    questions[13].value = 400;
    questions[13].answered = false;
    strcpy(questions[13].image, ""); // No image for this question

    strcpy(questions[14].category, "Aquatic Animal");
    strcpy(questions[14].question, "What fish changes its gender during its life?");
    strcpy(questions[14].answer, "clownfish");
    questions[14].value = 500;
    questions[14].answered = false;
    strcpy(questions[14].image, ""); // No image for this question

    // Fast food category
    strcpy(questions[15].category, "Fast Food");
    strcpy(questions[15].question, "Which restaurant is famous for serving the big Mac?");
    strcpy(questions[15].answer, "mcdonalds");
    questions[15].value = 100;
    questions[15].answered = false;
    strcpy(questions[15].image, ""); // No image for this question

    strcpy(questions[16].category, "Fast Food");
    strcpy(questions[16].question, "Which restaurant is known for their bucket of chicken?");
    strcpy(questions[16].answer, "kfc");
    questions[16].value = 200;
    questions[16].answered = false;
    strcpy(questions[16].image, ""); // No image for this question

    strcpy(questions[17].category, "Fast Food");
    strcpy(questions[17].question, "What restaurant is known for the baconator?");
    strcpy(questions[17].answer, "wendys");
    questions[17].value = 300;
    questions[17].answered = false;
    strcpy(questions[17].image, ""); // No image for this question

    strcpy(questions[18].category, "Fast Food");
    strcpy(questions[18].question, "What restaurant is said to have invented the secret menu?");
    strcpy(questions[18].answer, "In and out");
    questions[18].value = 400;
    questions[18].answered = false;
    strcpy(questions[18].image, ""); // No image for this question

    strcpy(questions[19].category, "Fast Food");
    strcpy(questions[19].question, "What is the name of the guy on KFC logo?");
    strcpy(questions[19].answer, "colonel sanders");
    questions[19].value = 500;
    questions[19].answered = false;
    strcpy(questions[19].image, ""); // No image for this question

    // Harry Potter category
    strcpy(questions[20].category, "Harry Potter");
    strcpy(questions[20].question, "What symbol is on Harry Potter's forehead?");
    strcpy(questions[20].answer, "lightning bolt");
    questions[20].value = 100;
    questions[20].answered = false;
    strcpy(questions[20].image, ""); // No image for this question

    strcpy(questions[21].category, "Harry Potter");
    strcpy(questions[21].question, "How many horcruxes does Voldemort have?");
    strcpy(questions[21].answer, "8");
    questions[21].value = 200;
    questions[21].answered = false;
    strcpy(questions[21].image, ""); // No image for this question

    strcpy(questions[22].category, "Harry Potter");
    strcpy(questions[22].question, "What is one of the three items that make up the deathly hallows?");
    strcpy(questions[22].answer, "cloak of invisibility/elder wand/resurrection stone");
    questions[22].value = 300;
    questions[22].answered = false;
    strcpy(questions[22].image, ""); // No image for this question

    strcpy(questions[23].category, "Harry Potter");
    strcpy(questions[23].question, "What is the name of the spell that repels dementors?");
    strcpy(questions[23].answer, "expecto patronum");
    questions[23].value = 400;
    questions[23].answered = false;
    strcpy(questions[23].image, ""); // No image for this question

    strcpy(questions[24].category, "Harry Potter");
    strcpy(questions[24].question, "What is the species of dragon Harry Potter fights in the first round of the goblet of fire tournament?");
    strcpy(questions[24].answer, "Hungarian horntail");
    questions[24].value = 500;
    questions[24].answered = false;
    strcpy(questions[24].image, ""); // No image for this question

    // Geography category
    strcpy(questions[25].category, "Geography");
    strcpy(questions[25].question, "How many continents are there?");
    strcpy(questions[25].answer, "7");
    questions[25].value = 100;
    questions[25].answered = false;
    strcpy(questions[25].image, ""); // No image for this question

    strcpy(questions[26].category, "Geography");
    strcpy(questions[26].question, "Name a country that starts with J.");
    strcpy(questions[26].answer, "Japan/Jamaica/Jordan");
    questions[26].value = 200;
    questions[26].answered = false;
    strcpy(questions[26].image, ""); // No image for this question

    strcpy(questions[27].category, "Geography");
    strcpy(questions[27].question, "What is the smallest country?");
    strcpy(questions[27].answer, "Vatican city");
    questions[27].value = 300;
    questions[27].answered = false;
    strcpy(questions[27].image, ""); // No image for this question

    strcpy(questions[28].category, "Geography");
    strcpy(questions[28].question, "What is the only letter that no countries start with?");
    strcpy(questions[28].answer, "X");
    questions[28].value = 400;
    questions[28].answered = false;
    strcpy(questions[28].image, ""); // No image for this question

    strcpy(questions[29].category, "Geography");
    strcpy(questions[29].question, "What country created French fries?");
    strcpy(questions[29].answer, "Belgium");
    questions[29].value = 500;
    questions[29].answered = false;
    strcpy(questions[29].image, ""); // No image for this question
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // Print the header with category names
    printf("%-20s %-20s %-20s\n", "Category", "Value", "Answered");

    // Iterate through the questions array and print each unanswered question
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (!questions[i].answered)
        {
            printf("%-20s %-20d %-20s\n", questions[i].category, questions[i].value, "No");
        }
    }
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{
    if (already_answered(category, value))
    {
        printf("This question has already been answered.\n");
        return;
    }

    // Find the question in the questions array and display it including the dollar value
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value)
        {
            printf("Question: %s\n", questions[i].question);
            return;
        }
    }
    printf("Question not found\n");
}

// Helper function to convert a string to lowercase
void to_lowercase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    if (already_answered(category, value))
    {
        printf("This question has already been answered.\n");
        return false;
    }

    // Find the question in the questions array
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value)
        {
            // Convert the given answer to lowercase
            char given_answer[MAX_LEN];
            strcpy(given_answer, answer);
            to_lowercase(given_answer);

            // Check if the given answer starts with "what is" or "who is"
            if (strncmp(given_answer, "what is ", 8) != 0 && strncmp(given_answer, "who is ", 7) != 0)
            {
                return false;
            }

            // Remove "what is " or "who is " from the given answer
            char *actual_answer = given_answer + (strncmp(given_answer, "what is ", 8) == 0 ? 8 : 7);

            // Convert the correct answer to lowercase
            char correct_answer[MAX_LEN];
            strcpy(correct_answer, questions[i].answer);
            to_lowercase(correct_answer);

            // Check if the actual answer matches any of the correct answers
            char *token = strtok(correct_answer, "/");
            while (token != NULL)
            {
                if (strcmp(actual_answer, token) == 0)
                {
                    return true;
                }
                token = strtok(NULL, "/");
            }
            return false;
        }
    }
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // Lookup the question and see if it's already been marked as answered
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value)
        {
            return questions[i].answered;
        }
    }
    return false;
}