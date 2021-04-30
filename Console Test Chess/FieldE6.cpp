#include "FieldE6.h"

const __int64 _stdcall FieldE6::GetIndex() const noexcept
{
	return FIELD_E6;
}

modern_array<IField*>& FieldE6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E7)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E7));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

