#include <raylib.hpp>
#include <screens.hpp>
//#include "include/raylib.hpp"
//#include "include/screens.hpp"

int main(void)
{
    // Set up the window
    const unsigned screenWidth = 800;
    const unsigned screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Basic Window");
    SetTargetFPS(60);

    // Load Textures
    Image bg = LoadImage("assets/background.png");
    Texture2D background = LoadTextureFromImage(bg);
    UnloadImage(bg);

    Screen currentScreen = LOADING;

    while (!WindowShouldClose())
    {
        currentScreen = getCurrentScreen(currentScreen);

        BeginDrawing();
            switch (currentScreen) {
                case LOADING:
                {
                    LoadingScreen();
                    break;
                }
                case TITLE:
                {
                    TitleScreen(background);
                    break;
                }
                case GAME:
                {
                    GameScreen();
                    break;
                }
                case ENDING:
                {
                    EndingScreen();
                    break;
                }
                default:
                    break;
            }
        EndDrawing();
    }

    // Unload Textures
    UnloadTexture(background);

    CloseWindow();

    return 0;
}
