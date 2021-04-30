#include "FieldD2.h"

const __int64 _stdcall FieldD2::GetIndex() const noexcept
{
	return FIELD_D2;
}

modern_array<IField*>& FieldD2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D3));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

