#pragma once
#include"Baul.h"
#include<math.h>
#include<vector>

class BallManager
{
public:
BallManager();
~BallManager();
void spawn();
void update(float dt);
void deathCheck();
void render(sf::RenderWindow* window);

private:
	std::vector<Baul> balls;
	sf::Vector2f spawnPoint;
	sf::Texture texture;
};


