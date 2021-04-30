#pragma once
#include "IPiece.h"

class Pawn :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	Pawn(const enum class EColor color);
	~Pawn();
};

