#include "FieldA7.h"

const __int64 _stdcall FieldA7::GetIndex() const noexcept
{
	return FIELD_A7;
}

modern_array<IField*>& FieldA7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_A8)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_A8));
	return *fields;
}

