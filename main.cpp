//#include <iostream>
#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy* enemy = new Enemy;
	enemy->Initialize();

	while (!enemy->IsLeave())
	{
		enemy->Update();
	}

	delete enemy;

	return 0;
}
