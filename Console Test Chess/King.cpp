#include "King.h"

void King::Update()
{
	Refresh();
}

const EPieceType King::GetType() const noexcept
{
	return EPieceType::KING;
}

King::~King()
{
}

King::King(const EColor color)
{
	m_color = color;
}
