#include "FieldA3.h"

const __int64 _stdcall FieldA3::GetIndex() const noexcept
{
	return FIELD_A3;
}

modern_array<IField*>& FieldA3::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B4)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B4));
	if (m_board->GetFieldByIndex(FIELD_A4)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_A4));
	return *fields;
}

