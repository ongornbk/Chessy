#include "FieldA5.h"

const __int64 _stdcall FieldA5::GetIndex() const noexcept
{
	return FIELD_A5;
}

modern_array<IField*>& FieldA5::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B6)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B6));
	if (m_board->GetFieldByIndex(FIELD_A6)->IsEmpty())

	fields->push_back(m_board->GetFieldByIndex(FIELD_A6));
	return *fields;
}

