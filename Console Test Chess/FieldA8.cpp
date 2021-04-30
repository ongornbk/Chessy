#include "FieldA8.h"

const __int64 _stdcall FieldA8::GetIndex() const noexcept
{
	return FIELD_A8;
}

modern_array<IField*>& FieldA8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	fields->push_back(m_board->GetFieldByIndex(FIELD_A8));
	return *fields;
}