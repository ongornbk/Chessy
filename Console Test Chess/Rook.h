#pragma once
#include "IPiece.h"

class Rook :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	Rook(const enum class EColor color);
	~Rook();
};

