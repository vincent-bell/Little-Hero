#ifndef SCREENS_H
#define SCREENS_H

#include "raylib.hpp"

typedef enum Screen {LOADING, TITLE, GAME, ENDING} Screen;
Screen getCurrentScreen (Screen currentScreen);
void LoadingScreen (void);
void TitleScreen (Texture2D background);
void GameScreen (void);
void EndingScreen (void);

#endif // SCREENS_H
