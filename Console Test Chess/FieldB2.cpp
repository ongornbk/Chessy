#include "FieldB2.h"

const __int64 _stdcall FieldB2::GetIndex() const noexcept
{
	return FIELD_B2;
}

modern_array<IField*>& FieldB2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_B3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

