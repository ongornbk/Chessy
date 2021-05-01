#include "FieldG2.h"

const __int64 _stdcall FieldG2::GetIndex() const noexcept
{
	return FIELD_G2;
}

modern_array<IField*>& FieldG2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_F3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_F3));
	if (m_board->GetFieldByIndex(FIELD_H3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_H3));
	if (m_board->GetFieldByIndex(FIELD_G3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_G3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_G4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_G4));
	return *fields;
}
