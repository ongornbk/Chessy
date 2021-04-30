#include "FieldA2.h"

const __int64 _stdcall FieldA2::GetIndex() const noexcept
{
	return FIELD_A2;
}

modern_array<IField*>& FieldA2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
	if (m_board->GetFieldByIndex(FIELD_A3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_A4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A4));
	return *fields;
}

