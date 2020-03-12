#pragma once
#include "Framework/GameObject.h"

class Baul :
	public GameObject
{
public:
	Baul();
	~Baul();
	void update(float dt) override;
};

