#include "FieldE1.h"

const __int64 _stdcall FieldE1::GetIndex() const noexcept
{
	return FIELD_E1;
}

modern_array<IField*>& FieldE1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E2)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E2));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

