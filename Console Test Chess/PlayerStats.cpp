#include "PlayerStats.h"
#include "modern_guard.h"
#include "modern_shared_guard.h"

PlayerStats::PlayerStats()
{
	m_possibleMoves = 0;
}

PlayerStats::~PlayerStats()
{
}

void PlayerStats::Refresh()
{
	modern_guard lock(this);
	m_possibleMoves = 0;
}

__int64 PlayerStats::GetNumberOfPossibleMoves() const noexcept
{
	modern_shared_guard lock(this);
	return m_possibleMoves;
}

void PlayerStats::AddMoves(const __int64 moves) noexcept
{
	modern_guard lock(this);
	m_possibleMoves += moves;
}
