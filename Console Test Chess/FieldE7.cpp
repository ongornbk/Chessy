#include "FieldE7.h"


const __int64 _stdcall FieldE7::GetIndex() const noexcept
{
	return FIELD_E7;
}

modern_array<IField*>& FieldE7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_E8)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

