#include "FieldD4.h"


const __int64 _stdcall FieldD4::GetIndex() const noexcept
{
	return FIELD_D4;
}

modern_array<IField*>& FieldD4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D5)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D5));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

