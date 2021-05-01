
#include "FieldH5.h"

const __int64 _stdcall FieldH5::GetIndex() const noexcept
{
	return FIELD_H5;
}

modern_array<IField*>& FieldH5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
