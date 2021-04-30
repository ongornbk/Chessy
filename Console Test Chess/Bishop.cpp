#include "Bishop.h"

Bishop::Bishop(const EColor color)
{
	m_color = color;
}

void Bishop::Update()
{
	Refresh();
}

const EPieceType Bishop::GetType() const noexcept
{
	return EPieceType::BISHOP;
}

Bishop::~Bishop()
{
}
