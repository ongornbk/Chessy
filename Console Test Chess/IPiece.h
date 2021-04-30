#pragma once
#include "EColor.h"
#include "EPieceType.h"
#include "gdef.h"

class IField;


class IPiece
{
protected:
	enum class EColor m_color;
	class IField* m_field;
	modern_array<class IPiece*> m_protectors;
	modern_array<class IPiece*> m_attackers;
	modern_array<class IPiece*> m_blockers;

	void Refresh();
public:
	virtual void Update() = 0;
	virtual const enum class EPieceType GetType() const noexcept = 0;

	const enum class EColor GetColor() const noexcept;
	void SetField(class IField* const field);
	void Protect(class IPiece* const protector);
	void Attack(class IPiece* const attacker);
};

