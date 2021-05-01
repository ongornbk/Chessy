#include "FieldA6.h"

const __int64 _stdcall FieldA6::GetIndex() const noexcept
{
	return FIELD_A6;
}

modern_array<IField*>& FieldA6::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B7)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B7));
	if (m_board->GetFieldByIndex(FIELD_A7)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_A7));
	return *fields;
}
