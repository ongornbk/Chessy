#include "FieldD5.h"

const __int64 _stdcall FieldD5::GetIndex() const noexcept
{
	return FIELD_D5;
}

modern_array<IField*>& FieldD5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D6)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D6));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

