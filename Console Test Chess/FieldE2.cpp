#include "FieldE2.h"

const __int64 _stdcall FieldE2::GetIndex() const noexcept
{
	return FIELD_E2;
}

modern_array<IField*>& FieldE2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E3));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

