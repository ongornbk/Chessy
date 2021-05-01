#include "FieldG8.h"

const __int64 _stdcall FieldG8::GetIndex() const noexcept
{
	return FIELD_G8;
}

modern_array<IField*>& FieldG8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
