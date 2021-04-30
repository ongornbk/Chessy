#include "FieldC6.h"


const __int64 _stdcall FieldC6::GetIndex() const noexcept
{
	return FIELD_C6;
}

modern_array<IField*>& FieldC6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C7)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C7));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

