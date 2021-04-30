#include "FieldD6.h"

const __int64 _stdcall FieldD6::GetIndex() const noexcept
{
	return FIELD_D6;
}

modern_array<IField*>& FieldD6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D7)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D7));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

