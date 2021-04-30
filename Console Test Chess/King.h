#pragma once
#include "IPiece.h"
class King :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	King(const enum class EColor color);
	~King();
};

