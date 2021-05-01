#include "FieldC1.h"

const __int64 _stdcall FieldC1::GetIndex() const noexcept
{
	return FIELD_C1;
}

modern_array<IField*>& FieldC1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_C2)->IsEmpty())
	fields->push_back(m_board->GetFieldByIndex(FIELD_C2));
	//fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	return *fields;
}

modern_array<IField*>& FieldC1::GetWhiteBishopMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();

	if (m_board->GetFieldByIndex(FIELD_B2)->IsEmptyOrBlack())
	{

		fields->push_back(m_board->GetFieldByIndex(FIELD_B2));
		if (m_board->GetFieldByIndex(FIELD_B2)->HasBlackPiece())
			goto END1;
		if (m_board->GetFieldByIndex(FIELD_A3)->IsEmptyOrBlack())
		{
			fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
		}
	}

	END1:

	if (m_board->GetFieldByIndex(FIELD_D2)->IsEmptyOrBlack())
	{

		fields->push_back(m_board->GetFieldByIndex(FIELD_D2));
		if (m_board->GetFieldByIndex(FIELD_D2)->HasBlackPiece())
			goto END2;

		if (m_board->GetFieldByIndex(FIELD_E3)->IsEmptyOrBlack())
		{

			fields->push_back(m_board->GetFieldByIndex(FIELD_E3));
			if (m_board->GetFieldByIndex(FIELD_E3)->HasBlackPiece())
				goto END2;

			if (m_board->GetFieldByIndex(FIELD_F4)->IsEmptyOrBlack())
			{

				fields->push_back(m_board->GetFieldByIndex(FIELD_F4));
				if (m_board->GetFieldByIndex(FIELD_F4)->HasBlackPiece())
					goto END2;

				if (m_board->GetFieldByIndex(FIELD_G5)->IsEmptyOrBlack())
				{

					fields->push_back(m_board->GetFieldByIndex(FIELD_G5));
					if (m_board->GetFieldByIndex(FIELD_G5)->HasBlackPiece())
						goto END2;

					if (m_board->GetFieldByIndex(FIELD_H6)->IsEmptyOrBlack())
					{

						fields->push_back(m_board->GetFieldByIndex(FIELD_H6));
						
					}
				}
			}
		}
	}

END2:

	return *fields;
}

