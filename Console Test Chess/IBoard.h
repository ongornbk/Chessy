#pragma once
#include "gdef.h"

class IField;

class IBoard
{
protected:
	modern_array<IField*> m_fields;
public:
	virtual class IField* const _stdcall GetFieldByIndex(const __int64 index) const noexcept = 0;
};

