#include "FieldF8.h"

const __int64 _stdcall FieldF8::GetIndex() const noexcept
{
	return FIELD_F8;
}

modern_array<IField*>& FieldF8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
