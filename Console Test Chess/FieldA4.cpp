#include "FieldA4.h"

const __int64 _stdcall FieldA4::GetIndex() const noexcept
{
	return FIELD_A4;
}

modern_array<IField*>& FieldA4::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B5)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B5));
	if (m_board->GetFieldByIndex(FIELD_A5)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_A5));
	return *fields;
}
