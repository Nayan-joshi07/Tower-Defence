//  Tower Defence Game
//
//  Created by Nayan joshi on 31/01/21.
//  Copyright © 2021 Sanjay Madhav. All rights reserved.
//
#include "Game.h"

int main(int argc, char** argv)
{
	Game game;
	bool success = game.Initialize();
	if (success)
	{
		game.RunLoop();
	}
	game.Shutdown();
	return 0;
}
