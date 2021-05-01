#include "FieldB2.h"

const __int64 _stdcall FieldB2::GetIndex() const noexcept
{
	return FIELD_B2;
}

modern_array<IField*>& FieldB2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_A3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	if (m_board->GetFieldByIndex(FIELD_C3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
	if (m_board->GetFieldByIndex(FIELD_B3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_B4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B4));
	return *fields;
}

modern_array<IField*>& FieldB2::GetWhiteBishopMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();

	if (m_board->GetFieldByIndex(FIELD_A1)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A1));

	if (m_board->GetFieldByIndex(FIELD_A3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A3));

	if (m_board->GetFieldByIndex(FIELD_C1)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C1));


		if (m_board->GetFieldByIndex(FIELD_C3)->IsEmptyOrBlack())
		{

			fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
			if (m_board->GetFieldByIndex(FIELD_C3)->HasBlackPiece())
				goto END;

			if (m_board->GetFieldByIndex(FIELD_D4)->IsEmptyOrBlack())
			{

				fields->push_back(m_board->GetFieldByIndex(FIELD_D4));
				if (m_board->GetFieldByIndex(FIELD_D4)->HasBlackPiece())
					goto END;

				if (m_board->GetFieldByIndex(FIELD_E5)->IsEmptyOrBlack())
				{

					fields->push_back(m_board->GetFieldByIndex(FIELD_E5));
					if (m_board->GetFieldByIndex(FIELD_E5)->HasBlackPiece())
						goto END;

					if (m_board->GetFieldByIndex(FIELD_F6)->IsEmptyOrBlack())
					{

						fields->push_back(m_board->GetFieldByIndex(FIELD_F6));
						if (m_board->GetFieldByIndex(FIELD_F6)->HasBlackPiece())
							goto END;

						if (m_board->GetFieldByIndex(FIELD_G7)->IsEmptyOrBlack())
						{

							fields->push_back(m_board->GetFieldByIndex(FIELD_G7));
							if (m_board->GetFieldByIndex(FIELD_G7)->HasBlackPiece())
								goto END;

							if (m_board->GetFieldByIndex(FIELD_H8)->IsEmptyOrBlack())
							{

								fields->push_back(m_board->GetFieldByIndex(FIELD_H8));

							}
						}
					}
				}
			}
		}

END:

	return *fields;
}