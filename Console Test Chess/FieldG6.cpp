#include "FieldG6.h"

const __int64 _stdcall FieldG6::GetIndex() const noexcept
{
	return FIELD_G6;
}

modern_array<IField*>& FieldG6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
