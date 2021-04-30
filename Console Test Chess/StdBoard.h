#pragma once
#include "IBoard.h"
class StdBoard :
	public IBoard, public modern_class
{
public:
	StdBoard();
	~StdBoard();

	class IField* const _stdcall GetFieldByIndex(const __int64 index) const noexcept override;
};

