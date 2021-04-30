#include "FIeldC4.h"

const __int64 _stdcall FieldC4::GetIndex() const noexcept
{
	return FIELD_C4;
}

modern_array<IField*>& FieldC4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C5)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C5));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

