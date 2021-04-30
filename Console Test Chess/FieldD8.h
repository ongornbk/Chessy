#pragma once
#include "IField.h"
#include "IBoard.h"

class FieldD8 :
	public IField
{
public:
	const __int64 _stdcall GetIndex() const noexcept override;
	modern_array<IField*>& GetWhitePawnMoves() override;

};

