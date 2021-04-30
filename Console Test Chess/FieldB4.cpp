#include "FieldB4.h"

const __int64 _stdcall FieldB4::GetIndex() const noexcept
{
	return FIELD_B4;
}

modern_array<IField*>& FieldB4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_B5)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B5));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

