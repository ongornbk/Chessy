#include "FieldG3.h"

const __int64 _stdcall FieldG3::GetIndex() const noexcept
{
	return FIELD_G3;
}

modern_array<IField*>& FieldG3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
