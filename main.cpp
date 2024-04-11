#include "C:\Users\91798\Downloads\SME-Assignment-master\SME-Assignment-master\Space-Invaders\header\Main\GameService.h"

int main()
{
    using namespace Main;

    GameService* game_service = new GameService();
    game_service->ignite();

    while (game_service->isRunning())
    {
        game_service->update();
        game_service->render();
    }

    return 0;
}