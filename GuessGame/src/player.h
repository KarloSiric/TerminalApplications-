#ifndef PLAYER_H
#define PLAYER_H 



#include "config.h"



typedef struct player
{
    
    char *name;
    int current_score;
    int lifetime_score;
    int games_played;
    int games_won;
    int best_single_game_score;
    int total_guesses_made;

} Player;



void init_player( Player *player, char *name );

void update_player_score( Player *player, int points_to_add );

void display_player_score( Player *player );

#endif
