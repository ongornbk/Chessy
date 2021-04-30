#include "FieldF3.h"

const __int64 _stdcall FieldF3::GetIndex() const noexcept
{
	return FIELD_F3;
}

modern_array<IField*>& FieldF3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
