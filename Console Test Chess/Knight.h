#pragma once
#include "IPiece.h"
class Knight :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	Knight(const enum class EColor color);
	~Knight();
};

