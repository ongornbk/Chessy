#pragma once
#include "modern_class.h"

class PlayerStats :
	public modern_class
{
	__int64 m_possibleMoves;
public:
	PlayerStats();
	~PlayerStats();

	void Refresh();
	void AddMoves(const __int64 moves) noexcept;
	__int64 GetNumberOfPossibleMoves() const noexcept;
};

