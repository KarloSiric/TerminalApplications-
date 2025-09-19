#ifndef GAME_CORE_H
#define GAME_CORE_H 



#include "config.h"



typedef enum GameGuess 
{

    TOO_LOW = -1,
    CORRECT,
    TOO_HIGH,

} e_GuessState;



typedef enum GameDifficulty
{
    
    DIFF_EASY = DIFFICULTY_MULTIPLIER_EASY,
    DIFF_MED,
    DIFF_HARD
    
} e_GameDifficulty;



typedef enum GameStatus 
{

    GAME_PLAYING,
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
