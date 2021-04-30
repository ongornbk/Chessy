#pragma once
#include "IPiece.h"
class Bishop :
	public IPiece
{
public:
	void Update() override;
	const enum class EPieceType GetType() const noexcept override;

	Bishop(const enum class EColor color);
	~Bishop();
};

