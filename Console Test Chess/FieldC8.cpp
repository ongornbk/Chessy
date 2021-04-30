#include "FieldC8.h"


const __int64 _stdcall FieldC8::GetIndex() const noexcept
{
	return FIELD_C8;
}

modern_array<IField*>& FieldC8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
		fields->push_back(m_board->GetFieldByIndex(FIELD_C8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

