#include "FieldA1.h"

const __int64 _stdcall FieldA1::GetIndex() const noexcept
{
	return FIELD_A1;
}

modern_array<IField*>& FieldA1::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

modern_array<IField*>& FieldA1::GetWhiteRookMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();

	if (m_board->GetFieldByIndex(FIELD_A2)->IsEmptyOrBlack())
	{

		fields->push_back(m_board->GetFieldByIndex(FIELD_A2));
		if (m_board->GetFieldByIndex(FIELD_A2)->HasBlackPiece())
			goto END1;
		if (m_board->GetFieldByIndex(FIELD_A3)->IsEmptyOrBlack())
		{
			fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
			if (m_board->GetFieldByIndex(FIELD_A3)->HasBlackPiece())
				goto END1;
			if (m_board->GetFieldByIndex(FIELD_A4)->IsEmptyOrBlack())
			{
				fields->push_back(m_board->GetFieldByIndex(FIELD_A4));
				if (m_board->GetFieldByIndex(FIELD_A4)->HasBlackPiece())
					goto END1;
				if (m_board->GetFieldByIndex(FIELD_A5)->IsEmptyOrBlack())
				{
					fields->push_back(m_board->GetFieldByIndex(FIELD_A5));
					if (m_board->GetFieldByIndex(FIELD_A5)->HasBlackPiece())
						goto END1;
					if (m_board->GetFieldByIndex(FIELD_A6)->IsEmptyOrBlack())
					{
						fields->push_back(m_board->GetFieldByIndex(FIELD_A6));
						if (m_board->GetFieldByIndex(FIELD_A6)->HasBlackPiece())
							goto END1;
						if (m_board->GetFieldByIndex(FIELD_A7)->IsEmptyOrBlack())
						{
							fields->push_back(m_board->GetFieldByIndex(FIELD_A7));
							if (m_board->GetFieldByIndex(FIELD_A7)->HasBlackPiece())
								goto END1;
							if (m_board->GetFieldByIndex(FIELD_A8)->IsEmptyOrBlack())
							{
								fields->push_back(m_board->GetFieldByIndex(FIELD_A8));
								if (m_board->GetFieldByIndex(FIELD_A8)->HasBlackPiece())
									goto END1;

							}
						}
					}
				}
			}
		}
	}

END1:

	if (m_board->GetFieldByIndex(FIELD_B1)->IsEmptyOrBlack())
	{
		fields->push_back(m_board->GetFieldByIndex(FIELD_B1));
		if (m_board->GetFieldByIndex(FIELD_B1)->HasBlackPiece())
			goto END2;
		if (m_board->GetFieldByIndex(FIELD_C1)->IsEmptyOrBlack())
		{
			fields->push_back(m_board->GetFieldByIndex(FIELD_C1));
			if (m_board->GetFieldByIndex(FIELD_C1)->HasBlackPiece())
				goto END2;
			if (m_board->GetFieldByIndex(FIELD_D1)->IsEmptyOrBlack())
			{
				fields->push_back(m_board->GetFieldByIndex(FIELD_D1));
				if (m_board->GetFieldByIndex(FIELD_D1)->HasBlackPiece())
					goto END2;
				if (m_board->GetFieldByIndex(FIELD_E1)->IsEmptyOrBlack())
				{
					fields->push_back(m_board->GetFieldByIndex(FIELD_E1));
					if (m_board->GetFieldByIndex(FIELD_E1)->HasBlackPiece())
						goto END2;
					if (m_board->GetFieldByIndex(FIELD_F1)->IsEmptyOrBlack())
					{
						fields->push_back(m_board->GetFieldByIndex(FIELD_F1));
						if (m_board->GetFieldByIndex(FIELD_F1)->HasBlackPiece())
							goto END2;
						if (m_board->GetFieldByIndex(FIELD_G1)->IsEmptyOrBlack())
						{
							fields->push_back(m_board->GetFieldByIndex(FIELD_G1));
							if (m_board->GetFieldByIndex(FIELD_G1)->HasBlackPiece())
								goto END2;
							if (m_board->GetFieldByIndex(FIELD_H1)->IsEmptyOrBlack())
							{
								fields->push_back(m_board->GetFieldByIndex(FIELD_H1));
								if (m_board->GetFieldByIndex(FIELD_H1)->HasBlackPiece())
									goto END2;

							}
						}
					}
				}
			}
		}
	}

END2:

	return *fields;
}

modern_array<IField*>& FieldA1::GetWhiteBishopMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();

	if (m_board->GetFieldByIndex(FIELD_B2)->IsEmptyOrBlack())
	{

		fields->push_back(m_board->GetFieldByIndex(FIELD_B2));
		if (m_board->GetFieldByIndex(FIELD_B2)->HasBlackPiece())
			goto END;
		
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
		}

END:

	return *fields;
}

