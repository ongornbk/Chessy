#include "FieldH4.h"

const __int64 _stdcall FieldH4::GetIndex() const noexcept
{
	return FIELD_H4;
}

modern_array<IField*>& FieldH4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
