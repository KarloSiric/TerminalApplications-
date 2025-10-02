/*
* @Author: karlosiric
* @Date:   2025-09-18 14:20:45
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-19 22:17:51
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

    strcpy( player -> name, name );

    player -> current_score = 0;
    player -> best_single_game_score = 0;
    player -> games_won = 0;
    player -> total_guesses_made = 0;
    player -> lifetime_score = 0;     
    
    return;

}


void update_player_score(Player *player, int points_to_add) {

    if (!player) {
        fprintf(stderr, "ERROR - Player is not initialized, call 'init_player()' function to init the player!\n");
        return;
    }

    player -> current_score += points_to_add;

}


void display_player_score(Player *player) {

    if (!player) {
        fprintf(stderr, "ERROR - Player is not initialized, call 'init_player()' function to init the player!\n");
        return;        
    }
    
   printf("\nPlayer's current score is %d\n", player->current_score);
    
}





