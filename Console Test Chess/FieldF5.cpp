#include "FieldF5.h"

const __int64 _stdcall FieldF5::GetIndex() const noexcept
{
	return FIELD_F5;
}

modern_array<IField*>& FieldF5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
