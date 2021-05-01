#include "FieldB6.h"


const __int64 _stdcall FieldB6::GetIndex() const noexcept
{
	return FIELD_B6;
}

modern_array<IField*>& FieldB6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_A7)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A7));
	if (m_board->GetFieldByIndex(FIELD_C7)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C7));
	if (m_board->GetFieldByIndex(FIELD_B7)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B7));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

