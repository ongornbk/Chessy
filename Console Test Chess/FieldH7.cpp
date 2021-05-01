#include "FieldH7.h"

const __int64 _stdcall FieldH7::GetIndex() const noexcept
{
	return FIELD_H7;
}

modern_array<IField*>& FieldH7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
