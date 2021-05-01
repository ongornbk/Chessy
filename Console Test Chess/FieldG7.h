#pragma once
#include "IField.h"
#include "IBoard.h"

class FieldG7 :
	public IField
{
public:
	const __int64 _stdcall GetIndex() const noexcept override;
	modern_array<IField*>& GetWhitePawnMoves() override;

};



