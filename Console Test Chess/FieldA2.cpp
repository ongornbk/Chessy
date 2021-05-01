#include "FieldA2.h"

const __int64 _stdcall FieldA2::GetIndex() const noexcept
{
	return FIELD_A2;
}

modern_array<IField*>& FieldA2::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>(2);
	if (m_board->GetFieldByIndex(FIELD_B3)->HasBlackPiece())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
	if (m_board->GetFieldByIndex(FIELD_A3)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A3));
	else
		return *fields;
	if (m_board->GetFieldByIndex(FIELD_A4)->IsEmpty())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A4));
	return *fields;
}

modern_array<IField*>& FieldA2::GetWhiteRookMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();

	if (m_board->GetFieldByIndex(FIELD_A1)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_A1));

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
							fields->push_back(m_board->GetFieldByIndex(FIELD_A8));

					}
				}
			}
		}
	}

END1:

	if (m_board->GetFieldByIndex(FIELD_B2)->IsEmptyOrBlack())
	{
		fields->push_back(m_board->GetFieldByIndex(FIELD_B2));
		if (m_board->GetFieldByIndex(FIELD_B2)->HasBlackPiece())
			goto END2;
		if (m_board->GetFieldByIndex(FIELD_C2)->IsEmptyOrBlack())
		{
			fields->push_back(m_board->GetFieldByIndex(FIELD_C2));
			if (m_board->GetFieldByIndex(FIELD_C2)->HasBlackPiece())
				goto END2;
			if (m_board->GetFieldByIndex(FIELD_D2)->IsEmptyOrBlack())
			{
				fields->push_back(m_board->GetFieldByIndex(FIELD_D2));
				if (m_board->GetFieldByIndex(FIELD_D2)->HasBlackPiece())
					goto END2;
				if (m_board->GetFieldByIndex(FIELD_E2)->IsEmptyOrBlack())
				{
					fields->push_back(m_board->GetFieldByIndex(FIELD_E2));
					if (m_board->GetFieldByIndex(FIELD_E2)->HasBlackPiece())
						goto END2;
					if (m_board->GetFieldByIndex(FIELD_F2)->IsEmptyOrBlack())
					{
						fields->push_back(m_board->GetFieldByIndex(FIELD_F2));
						if (m_board->GetFieldByIndex(FIELD_F2)->HasBlackPiece())
							goto END2;
						if (m_board->GetFieldByIndex(FIELD_G2)->IsEmptyOrBlack())
						{
							fields->push_back(m_board->GetFieldByIndex(FIELD_G2));
							if (m_board->GetFieldByIndex(FIELD_G2)->HasBlackPiece())
								goto END2;
							if (m_board->GetFieldByIndex(FIELD_H2)->IsEmptyOrBlack())
							{
								fields->push_back(m_board->GetFieldByIndex(FIELD_H2));
								if (m_board->GetFieldByIndex(FIELD_H2)->HasBlackPiece())
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

modern_array<IField*>& FieldA2::GetWhiteBishopMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();


	if (m_board->GetFieldByIndex(FIELD_B1)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B1));

	if (m_board->GetFieldByIndex(FIELD_B3)->IsEmptyOrBlack())
	{

		fields->push_back(m_board->GetFieldByIndex(FIELD_B3));
		if (m_board->GetFieldByIndex(FIELD_B3)->HasBlackPiece())
			goto END;

		if (m_board->GetFieldByIndex(FIELD_C4)->IsEmptyOrBlack())
		{

			fields->push_back(m_board->GetFieldByIndex(FIELD_C4));
			if (m_board->GetFieldByIndex(FIELD_C4)->HasBlackPiece())
				goto END;

			if (m_board->GetFieldByIndex(FIELD_D5)->IsEmptyOrBlack())
			{

				fields->push_back(m_board->GetFieldByIndex(FIELD_D5));
				if (m_board->GetFieldByIndex(FIELD_D5)->HasBlackPiece())
					goto END;

				if (m_board->GetFieldByIndex(FIELD_E6)->IsEmptyOrBlack())
				{

					fields->push_back(m_board->GetFieldByIndex(FIELD_E6));
					if (m_board->GetFieldByIndex(FIELD_E6)->HasBlackPiece())
						goto END;

					if (m_board->GetFieldByIndex(FIELD_F7)->IsEmptyOrBlack())
					{

						fields->push_back(m_board->GetFieldByIndex(FIELD_F7));
						if (m_board->GetFieldByIndex(FIELD_F7)->HasBlackPiece())
							goto END;

						if (m_board->GetFieldByIndex(FIELD_G8)->IsEmptyOrBlack())
						{

							fields->push_back(m_board->GetFieldByIndex(FIELD_G8));
							
						}
					}
				}
			}
		}
	}

END:

	return *fields;
}

modern_array<IField*>& FieldA2::GetWhiteKnightMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	if (m_board->GetFieldByIndex(FIELD_B4)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_B4));
	if (m_board->GetFieldByIndex(FIELD_C3)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C3));
	if (m_board->GetFieldByIndex(FIELD_C1)->IsEmptyOrBlack())
		fields->push_back(m_board->GetFieldByIndex(FIELD_C1));
	return *fields;
}

