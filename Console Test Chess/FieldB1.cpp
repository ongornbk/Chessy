#include "FieldB1.h"

const __int64 _stdcall FieldB1::GetIndex() const noexcept
{
	return FIELD_B1;
}

modern_array<IField*>& FieldB1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_B2)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B2));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

modern_array<IField*>& FieldB1::GetWhiteKnightMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_A3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	if (m_board->GetFieldByIndex(FIELD_C3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
	if (m_board->GetFieldByIndex(FIELD_D2)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_D2));
	return *fields;
}

