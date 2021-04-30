#include "FieldF4.h"

const __int64 _stdcall FieldF4::GetIndex() const noexcept
{
	return FIELD_F4;
}

modern_array<IField*>& FieldF4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
