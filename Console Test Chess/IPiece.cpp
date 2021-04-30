#include "IPiece.h"

void IPiece::Refresh()
{
	m_protectors.clear();
	m_attackers.clear();
}

const EColor IPiece::GetColor() const noexcept
{
	return m_color;
}

void IPiece::SetField(IField* const field)
{
	m_field = field;
}

void IPiece::Protect(IPiece* const protector)
{
	m_protectors.push_back(protector);
}

void IPiece::Attack(IPiece* const attacker)
{
	m_attackers.push_back(attacker);
}
