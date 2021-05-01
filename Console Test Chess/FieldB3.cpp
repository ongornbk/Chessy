#include "FieldB3.h"

const __int64 _stdcall FieldB3::GetIndex() const noexcept
{
	return FIELD_B3;
}

modern_array<IField*>& FieldB3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_A4)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A4));
	if (m_board->GetFieldByIndex(FIELD_C4)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C4));
	if (m_board->GetFieldByIndex(FIELD_B4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B4));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

