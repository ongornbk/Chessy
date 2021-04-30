#include "FieldB5.h"


const __int64 _stdcall FieldB5::GetIndex() const noexcept
{
	return FIELD_B5;
}

modern_array<IField*>& FieldB5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_B6)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B6));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

