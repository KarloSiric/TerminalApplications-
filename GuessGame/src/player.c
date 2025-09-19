/*
* @Author: karlosiric
* @Date:   2025-09-18 14:20:45
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-19 22:02:58
*/


#include "player.h"
#include <stdio.h>
#include <stdlib.h>


void init_player( Player *player, char *name ) {


    player -> name = malloc( (strlen( name ) + 1 )* sizeof( char ) );

    if ( !player -> name ) {
        perror( "ERROR - Failed to malloc space for the player name.!\n" );
        return;
    }

    strcpy( player -> name, name);

    player -> current_score = 0;
    player -> best_single_game_score = 0;
    player -> games_won = 0;
    player -> total_guesses_made = 0;
    player -> lifetime_score = 0;

    return;

}

