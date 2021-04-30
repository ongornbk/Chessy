#include "FieldE3.h"

const __int64 _stdcall FieldE3::GetIndex() const noexcept
{
	return FIELD_E3;
}

modern_array<IField*>& FieldE3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E4));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

