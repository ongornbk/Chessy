#include "FieldG4.h"

const __int64 _stdcall FieldG4::GetIndex() const noexcept
{
	return FIELD_G4;
}

modern_array<IField*>& FieldG4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}
