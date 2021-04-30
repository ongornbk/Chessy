#include "FieldD1.h"


const __int64 _stdcall FieldD1::GetIndex() const noexcept
{
	return FIELD_D1;
}

modern_array<IField*>& FieldD1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D2)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_D2));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

