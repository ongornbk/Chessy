#include "FieldH8.h"

const __int64 _stdcall FieldH8::GetIndex() const noexcept
{
	return FIELD_H8;
}

modern_array<IField*>& FieldH8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
