#include "FieldF2.h"

const __int64 _stdcall FieldF2::GetIndex() const noexcept
{
	return FIELD_F2;
}

modern_array<IField*>& FieldF2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
