#pragma once
#include "IPiece.h"
class Queen :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	Queen(const enum class EColor color);
	~Queen();
};

