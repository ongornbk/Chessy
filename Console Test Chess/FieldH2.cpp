#include "FieldH2.h"

const __int64 _stdcall FieldH2::GetIndex() const noexcept
{
	return FIELD_H2;
}

modern_array<IField*>& FieldH2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_G3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_G3));
	if (m_board->GetFieldByIndex(FIELD_H3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_H3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_H4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_H4));
	return *fields;
}
