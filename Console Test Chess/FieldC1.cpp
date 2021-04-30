#include "FieldC1.h"

const __int64 _stdcall FieldC1::GetIndex() const noexcept
{
	return FIELD_C1;
}

modern_array<IField*>& FieldC1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C2)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_C2));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

