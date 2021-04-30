#include "FieldF1.h"

const __int64 _stdcall FieldF1::GetIndex() const noexcept
{
	return FIELD_F1;
}

modern_array<IField*>& FieldF1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
