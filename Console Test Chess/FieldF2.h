#pragma once
#include "IField.h"
class FieldF2 :
	public IField
{
public:
	const __int64 _stdcall GetIndex() const noexcept override;
	modern_array<IField*>& GetWhitePawnMoves() override;

};

