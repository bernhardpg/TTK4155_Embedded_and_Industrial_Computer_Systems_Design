#ifndef MENU_H
#define MENU_H
#include <stdint.h>

void menu_init(void);
void menu_draw_options(const char ** options, uint8_t n_options, const char * title);
uint8_t menu_select_option(const uint8_t n_options);
void menu_display_game_state(const uint16_t score, const uint8_t n_lives, const char * player_diff);
void menu_game_over(uint8_t score);
void menu_leaderboard(const char * leaderboard);
void menu_save_score(uint16_t score);
void menu_load_leaderboard(void);
//void menu_display_loading(void);

#endif
