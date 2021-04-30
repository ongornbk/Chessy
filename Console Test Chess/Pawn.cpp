#include "Pawn.h"

Pawn::Pawn(const EColor color)
{
	m_color = color;
}

void Pawn::Update()
{
	Refresh();
}

const EPieceType Pawn::GetType() const noexcept
{
	return EPieceType::PAWN;
}

Pawn::~Pawn()
{
}
