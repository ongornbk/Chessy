#include "FieldF6.h"

const __int64 _stdcall FieldF6::GetIndex() const noexcept
{
	return FIELD_F6;
}

modern_array<IField*>& FieldF6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
