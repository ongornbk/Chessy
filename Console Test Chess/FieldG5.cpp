#include "FieldG5.h"

const __int64 _stdcall FieldG5::GetIndex() const noexcept
{
	return FIELD_G5;
}

modern_array<IField*>& FieldG5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
