#include "FieldG1.h"

const __int64 _stdcall FieldG1::GetIndex() const noexcept
{
	return FIELD_G1;
}

modern_array<IField*>& FieldG1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

modern_array<IField*>& FieldG1::GetWhiteKnightMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_H3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_H3));
	if (m_board->GetFieldByIndex(FIELD_F3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_F3));
	if (m_board->GetFieldByIndex(FIELD_E2)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_E2));
	return *fields;
}
