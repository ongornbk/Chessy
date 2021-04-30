#include "FieldE8.h"

const __int64 _stdcall FieldE8::GetIndex() const noexcept
{
	return FIELD_E8;
}

modern_array<IField*>& FieldE8::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

