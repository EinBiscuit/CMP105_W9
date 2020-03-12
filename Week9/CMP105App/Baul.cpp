#include "Baul.h"

Baul::Baul()
{
}

Baul::~Baul()
{
}

void Baul::update(float dt)
{
	move(velocity * dt);
}
