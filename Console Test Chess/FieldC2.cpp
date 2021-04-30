#include "FieldC2.h"

const __int64 _stdcall FieldC2::GetIndex() const noexcept
{
	return FIELD_C2;
}

modern_array<IField*>& FieldC2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
	if (m_board->GetFieldByIndex(FIELD_D3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D3));
	if (m_board->GetFieldByIndex(FIELD_C3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_C4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C4));
	return *fields;
}

