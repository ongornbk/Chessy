#include "FieldB7.h"

const __int64 _stdcall FieldB7::GetIndex() const noexcept
{
	return FIELD_B7;
}

modern_array<IField*>& FieldB7::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_A8)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A8));
	if (m_board->GetFieldByIndex(FIELD_C8)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C8));
	if (m_board->GetFieldByIndex(FIELD_B8)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B8));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

