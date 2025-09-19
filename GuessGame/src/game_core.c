/*
* @Author: karlosiric
* @Date:   2025-09-18 14:20:45
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-19 21:51:05
*/


#include "game_core.h"



GameState init_game( e_GameDifficulty difficulty ) 
{

    GameState new_game;

    int choice = difficulty;

    switch ( choice ) {
        case ( DIFF_EASY ): 
            new_game.GameDifficulty = DIFF_EASY;
            new_game.max_attempts = EASY_ATTEMPTS;
            new_game.secret_number = RANDOM_EASY;
            break;
        case ( DIFF_MED ):
            new_game.GameDifficulty = DIFF_MED;
            new_game.max_attempts = MEDIUM_ATTEMPTS;
            new_game.secret_number = RANDOM_MEDIUM;
            break;
        case ( DIFF_HARD ):
            new_game.GameDifficulty = DIFF_HARD;
            new_game.max_attempts = HARD_ATTEMPTS;
            new_game.secret_number = RANDOM_HARD;
            break;
        default:
            printf( "ERROR - Invalid choice for game difficulty, exiting ...\n" );
            break;
    }

    new_game.GameStatus = GAME_PLAYING;
    new_game.attempts_made = 0;

    return new_game;

}

e_GuessState check_guess( GameState *game, int attempt )
{

    game -> attempts_made++;

    if ( game -> secret_number == attempt )
    {   
        game -> GameStatus = GAME_WON;
        printf( "%s\n", GUESS_MESSAGES[CORRECT] );
        return CORRECT;
    }
    else if ( attempt < game -> secret_number )
    {
        if ( game -> attempts_made >= game -> max_attempts )
        {
            game -> GameStatus = GAME_LOST;
            printf("%s\n", GUESS_MESSAGES[TOO_MANY_GUESSES]);
            return TOO_MANY_GUESSES;
        }
        printf( GUESS_MESSAGES[TOO_LOW], attempt );
        return TOO_LOW;
    }
    else 
    {
        if ( game -> attempts_made >= game -> max_attempts )
        {
            game -> GameStatus = GAME_LOST;
            printf("%s\n", GUESS_MESSAGES[TOO_MANY_GUESSES]);
            return TOO_MANY_GUESSES;
        }
        printf( GUESS_MESSAGES[TOO_HIGH], attempt );
        return TOO_HIGH;
   } 


}

