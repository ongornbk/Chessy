#include "FieldD2.h"

const __int64 _stdcall FieldD2::GetIndex() const noexcept
{
	return FIELD_D2;
}

modern_array<IField*>& FieldD2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_C3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
	if (m_board->GetFieldByIndex(FIELD_E3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E3));
	if (m_board->GetFieldByIndex(FIELD_D3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_D4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D4));
	return *fields;
}

