#include "FieldA1.h"

const __int64 _stdcall FieldA1::GetIndex() const noexcept
{
	return FIELD_A1;
}

modern_array<IField*>& FieldA1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

