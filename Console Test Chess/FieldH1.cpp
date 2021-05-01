#include "FieldH1.h"


const __int64 _stdcall FieldH1::GetIndex() const noexcept
{
	return FIELD_H1;
}

modern_array<IField*>& FieldH1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
