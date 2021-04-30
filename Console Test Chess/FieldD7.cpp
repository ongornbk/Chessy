#include "FieldD7.h"


const __int64 _stdcall FieldD7::GetIndex() const noexcept
{
	return FIELD_D7;
}

modern_array<IField*>& FieldD7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_D8)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

