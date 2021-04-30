#include "FieldD8.h"

const __int64 _stdcall FieldD8::GetIndex() const noexcept
{
	return FIELD_D8;
}

modern_array<IField*>& FieldD8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
		fields->push_back(m_board->GetFieldByIndex(FIELD_D8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

