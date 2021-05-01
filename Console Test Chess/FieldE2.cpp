#include "FieldE2.h"

const __int64 _stdcall FieldE2::GetIndex() const noexcept
{
	return FIELD_E2;
}

modern_array<IField*>& FieldE2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_E3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E3));
	if (m_board->GetFieldByIndex(FIELD_G3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_G3));
	if (m_board->GetFieldByIndex(FIELD_F3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_F3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_F4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_F4));
	return *fields;
}

