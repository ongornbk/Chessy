#include "FieldB8.h"

const __int64 _stdcall FieldB8::GetIndex() const noexcept
{
	return FIELD_B8;
}

modern_array<IField*>& FieldB8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
		fields->push_back(m_board->GetFieldByIndex(FIELD_B8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

