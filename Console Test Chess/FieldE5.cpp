#include "FieldE5.h"

const __int64 _stdcall FieldE5::GetIndex() const noexcept
{
	return FIELD_E5;
}

modern_array<IField*>& FieldE5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E6)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E6));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

