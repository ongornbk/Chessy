#include "Queen.h"

void Queen::Update()
{
	Refresh();
}

const EPieceType Queen::GetType() const noexcept
{
	return EPieceType::QUEEN;
}

Queen::~Queen()
{
}

Queen::Queen(const EColor color)
{
	m_color = color;
}
