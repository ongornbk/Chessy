#pragma once
#include "IField.h"
#include "IBoard.h"

class FieldA2 :
	public IField
{
public:
	const __int64 _stdcall GetIndex() const noexcept override;
	modern_array<IField*>& GetWhitePawnMoves() override;
	modern_array<IField*>& GetWhiteRookMoves() override;
	modern_array<IField*>& GetWhiteBishopMoves() override;
	modern_array<IField*>& GetWhiteKnightMoves() override;
};

