#pragma once
#include "modern_class.h"
#include "modern_shared.h"
#include "PlayerStats.h"

class Player :
	public modern_class
{
	modern_shared<PlayerStats> m_stats;
public:
	Player();
	~Player();
	modern_shared<PlayerStats>& GetStats();
};

