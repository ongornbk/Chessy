#include "FieldH3.h"

const __int64 _stdcall FieldH3::GetIndex() const noexcept
{
	return FIELD_H3;
}

modern_array<IField*>& FieldH3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
