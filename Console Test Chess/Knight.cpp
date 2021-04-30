#include "Knight.h"

Knight::Knight(const EColor color)
{
	m_color = color;
}

void Knight::Update()
{
	Refresh();
}

const EPieceType Knight::GetType() const noexcept
{
	return EPieceType::KNIGHT;
}

Knight::~Knight()
{
}
