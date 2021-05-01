#include "Rook.h"

Rook::Rook(const EColor color)
{
	m_color = color;
}

void Rook::Update()
{
	Refresh();
}

const EPieceType Rook::GetType() const noexcept
{
	return EPieceType::ROOK;
}

Rook::~Rook()
{
}
