#include "FieldE4.h"

const __int64 _stdcall FieldE4::GetIndex() const noexcept
{
	return FIELD_E4;
}

modern_array<IField*>& FieldE4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E5)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E5));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

