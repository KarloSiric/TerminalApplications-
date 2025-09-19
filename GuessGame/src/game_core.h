#ifndef GAME_CORE_H
#define GAME_CORE_H 



#include "config.h"



typedef enum GameGuess 
{

    TOO_LOW = 0,
    CORRECT,
    TOO_HIGH,
    TOO_MANY_GUESSES,
    WRONG_FORMAT,

} e_GuessState;



static const char *GUESS_MESSAGES[] =
{
    "Wrong Guess! Your guess %d is too LOW!\n", 
    "You are CORRECT!",
    "Wrong Guess! Your guess %d is too high!\n",
    "You are out of guesses! Game over!",
    "You have entered an invalid character. Please enter a number and try again!",
};



typedef enum GameDifficulty
{
    
    DIFF_EASY = DIFFICULTY_MULTIPLIER_EASY,
    DIFF_MED,
    DIFF_HARD
    
} e_GameDifficulty;



typedef enum GameStatus 
{

    GAME_PLAYING = 1,
    GAME_WON,
    GAME_LOST,

} e_GameStatus;



typedef struct gamecore
{
    
    int secret_number;
    int attempts_made;
    int max_attempts;
    e_GameDifficulty GameDifficulty;
    e_GameStatus GameStatus;

} GameState;



GameState init_game( e_GameDifficulty difficulty );



e_GuessState check_guess( GameState *game, int attempt );










#endif
