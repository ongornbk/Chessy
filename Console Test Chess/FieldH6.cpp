#include "FieldH6.h"

const __int64 _stdcall FieldH6::GetIndex() const noexcept
{
	return FIELD_H6;
}

modern_array<IField*>& FieldH6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
