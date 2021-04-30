#include "FieldC7.h"

const __int64 _stdcall FieldC7::GetIndex() const noexcept
{
	return FIELD_C7;
}

modern_array<IField*>& FieldC7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C8)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

