#include "FieldG7.h"


const __int64 _stdcall FieldG7::GetIndex() const noexcept
{
	return FIELD_G7;
}

modern_array<IField*>& FieldG7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
