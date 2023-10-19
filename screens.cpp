#include <raylib.hpp>
#include <screens.hpp>
//#include "include/raylib.hpp"
//#include "include/screens.hpp"

Screen getCurrentScreen (Screen currentScreen)
{
    switch (currentScreen) {
        case LOADING:
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) currentScreen = TITLE;
            break;
        case TITLE:
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) currentScreen = GAME;
            break;
        case GAME:
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) currentScreen = ENDING;
            break;
        case ENDING:
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) currentScreen = LOADING;
            break;
    }

    return currentScreen;
}

void LoadingScreen (void)
{
    ClearBackground(RAYWHITE);
    DrawText("LOADING SCREEN", 20, 20, 40, DARKGRAY);
}

void TitleScreen (Texture2D background)
{
    ClearBackground(RAYWHITE);
    DrawTexture(background, 0, 0, WHITE);
    DrawText("TITLE SCREEN", 20, 20, 40, RAYWHITE);
}

void GameScreen (void)
{
    ClearBackground(RAYWHITE);
    DrawText("GAME SCREEN", 20, 20, 40, DARKGRAY);
}

void EndingScreen (void)
{
    ClearBackground(RAYWHITE);
    DrawText("ENDING SCREEN", 20, 20, 40, DARKGRAY);
}
