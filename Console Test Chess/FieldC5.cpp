#include "FieldC5.h"
#include "IBoard.h"

const __int64 _stdcall FieldC5::GetIndex() const noexcept
{
	return FIELD_C5;
}

modern_array<IField*>& FieldC5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C6)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C6));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

