#include "FieldD3.h"

const __int64 _stdcall FieldD3::GetIndex() const noexcept
{
	return FIELD_D3;
}

modern_array<IField*>& FieldD3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D4));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

