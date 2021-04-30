#include "Rook.h"

Rook::Rook(const EColor color)
{
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
