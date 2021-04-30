#include "FieldC3.h"

const __int64 _stdcall FieldC3::GetIndex() const noexcept
{
	return FIELD_C3;
}

modern_array<IField*>& FieldC3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C4));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

