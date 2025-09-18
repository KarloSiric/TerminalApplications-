#ifndef GAME_CONFIG_H
#define GAME_CONFIG_H 



#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>



#define GAME_VERSION                          0.1alpha



#define EASY_MIN                              1
#define EASY_MAX                              10



#define MAX_GUESSES                           5



#define MEDIUM_MIN                            1
#define MEDIUM_MAX                            100



#define HARD_MIN                              1
#define HARD_MAX                              1000



#define BASE_SCORE                            1000
#define GUESS_PENALTY                         500
#define TIME_BONUS                            50
#define DIFFICULTY_MULTIPLIER_EASY            1
#define DIFFICULTY_MULTIPLIER_MEDIUM          2
#define DIFFICULTY_MULTIPLIER_HARD            3



#define RANDOM_EASY                           ( rand() % ( EASY_MAX - EASY_MIN + 1 ) + EASY_MIN )
#define RANDOM_MEDIUM                         ( rand() % ( MEDIUM_MAX - MEDIUM_MIN + 1 ) + MEDIUM_MIN )
#define RANDOM_HARD                           ( rand() % ( HARD_MAX - HARD_MIN + 1) + HARD_MIN )

























#endif
