#include "Player.h"
#include "modern_shared_guard.h"

Player::Player()
{
	m_stats.make_shared(new PlayerStats());
}

Player::~Player()
{
}

modern_shared<PlayerStats>& Player::GetStats()
{
	modern_shared_guard lock(this);
	modern_shared<PlayerStats>* stats = new modern_shared<PlayerStats>();
	stats->make_shared(m_stats);
	return *stats;
}
