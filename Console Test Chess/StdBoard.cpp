#include "StdBoard.h"
#include "FieldA1.h"
#include "FieldA2.h"
#include "FieldA3.h"
#include "FieldA4.h"
#include "FieldA5.h"
#include "FieldA6.h"
#include "FieldA7.h"
#include "FieldA8.h"
#include "FieldB1.h"
#include "FieldB2.h"
#include "FieldB3.h"
#include "FieldB4.h"
#include "FieldB5.h"
#include "FieldB6.h"
#include "FieldB7.h"
#include "FieldB8.h"
#include "FieldC1.h"
#include "FieldC2.h"
#include "FieldC3.h"
#include "FieldC4.h"
#include "FieldC5.h"
#include "FieldC6.h"
#include "FieldC7.h"
#include "FieldC8.h"
#include "FieldD1.h"
#include "FieldD2.h"
#include "FieldD3.h"
#include "FieldD4.h"
#include "FieldD5.h"
#include "FieldD6.h"
#include "FieldD7.h"
#include "FieldD8.h"
#include "FieldE1.h"
#include "FieldE2.h"
#include "FieldE3.h"
#include "FieldE4.h"
#include "FieldE5.h"
#include "FieldE6.h"
#include "FieldE7.h"
#include "FieldE8.h"
#include "FieldF1.h"
#include "FieldF2.h"
#include "FieldF3.h"
#include "FieldF4.h"
#include "FieldF5.h"
#include "FieldF6.h"
#include "FieldF7.h"
#include "FieldF8.h"
#include "FieldG1.h"
#include "FieldG2.h"
#include "FieldG3.h"
#include "FieldG4.h"
#include "FieldG5.h"
#include "FieldG6.h"
#include "FieldG7.h"
#include "FieldG8.h"
#include "FieldH1.h"
#include "FieldH2.h"
#include "FieldH3.h"
#include "FieldH4.h"
#include "FieldH5.h"
#include "FieldH6.h"
#include "FieldH7.h"
#include "FieldH8.h"

#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

#include "Player.h"

#include <iostream>

StdBoard::StdBoard()
{
	m_fields.push_back(new class FieldA1()); //0
	m_fields.push_back(new class FieldA2()); //1
	m_fields.push_back(new class FieldA3()); //2
	m_fields.push_back(new class FieldA4()); //3
	m_fields.push_back(new class FieldA5()); //4
	m_fields.push_back(new class FieldA6()); //5
	m_fields.push_back(new class FieldA7()); //6
	m_fields.push_back(new class FieldA8()); //7
	m_fields.push_back(new class FieldB1()); //8
	m_fields.push_back(new class FieldB2()); //9
	m_fields.push_back(new class FieldB3()); //10
	m_fields.push_back(new class FieldB4()); //11
	m_fields.push_back(new class FieldB5()); //12
	m_fields.push_back(new class FieldB6()); //13
	m_fields.push_back(new class FieldB7()); //14
	m_fields.push_back(new class FieldB8()); //15
	m_fields.push_back(new class FieldC1()); //16
	m_fields.push_back(new class FieldC2()); //17
	m_fields.push_back(new class FieldC3()); //18
	m_fields.push_back(new class FieldC4()); //19
	m_fields.push_back(new class FieldC5()); //20
	m_fields.push_back(new class FieldC6()); //21
	m_fields.push_back(new class FieldC7()); //22
	m_fields.push_back(new class FieldC8()); //23
	m_fields.push_back(new class FieldD1()); //24
	m_fields.push_back(new class FieldD2()); //25
	m_fields.push_back(new class FieldD3()); //26
	m_fields.push_back(new class FieldD4()); //27
	m_fields.push_back(new class FieldD5()); //28
	m_fields.push_back(new class FieldD6()); //29
	m_fields.push_back(new class FieldD7()); //30
	m_fields.push_back(new class FieldD8()); //31
	m_fields.push_back(new class FieldE1()); //32
	m_fields.push_back(new class FieldE2()); //33
	m_fields.push_back(new class FieldE3()); //34
	m_fields.push_back(new class FieldE4()); //35
	m_fields.push_back(new class FieldE5()); //36
	m_fields.push_back(new class FieldE6()); //37
	m_fields.push_back(new class FieldE7()); //38
	m_fields.push_back(new class FieldE8()); //39
	m_fields.push_back(new class FieldF1()); //40
	m_fields.push_back(new class FieldF2()); //41
	m_fields.push_back(new class FieldF3()); //42
	m_fields.push_back(new class FieldF4()); //43
	m_fields.push_back(new class FieldF5()); //44
	m_fields.push_back(new class FieldF6()); //45
	m_fields.push_back(new class FieldF7()); //46
	m_fields.push_back(new class FieldF8()); //47
	m_fields.push_back(new class FieldG1()); //48
	m_fields.push_back(new class FieldG2()); //49
	m_fields.push_back(new class FieldG3()); //50
	m_fields.push_back(new class FieldG4()); //51
	m_fields.push_back(new class FieldG5()); //52
	m_fields.push_back(new class FieldG6()); //53
	m_fields.push_back(new class FieldG7()); //54
	m_fields.push_back(new class FieldG8()); //55
	m_fields.push_back(new class FieldH1()); //56
	m_fields.push_back(new class FieldH2()); //57
	m_fields.push_back(new class FieldH3()); //58
	m_fields.push_back(new class FieldH4()); //59
	m_fields.push_back(new class FieldH5()); //60
	m_fields.push_back(new class FieldH6()); //61
	m_fields.push_back(new class FieldH7()); //62
	m_fields.push_back(new class FieldH8()); //63


	m_fields[0]->PutPiece(new Rook(EColor::PIECE_COLOR_WHITE));
	m_fields[1]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[6]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[7]->PutPiece(new Rook(EColor::PIECE_COLOR_BLACK));
	m_fields[8]->PutPiece(new Knight(EColor::PIECE_COLOR_WHITE));
	m_fields[9]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[14]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[15]->PutPiece(new Knight(EColor::PIECE_COLOR_BLACK));
	m_fields[16]->PutPiece(new Bishop(EColor::PIECE_COLOR_WHITE));
	m_fields[17]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[22]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[23]->PutPiece(new Bishop(EColor::PIECE_COLOR_BLACK));
	m_fields[24]->PutPiece(new Queen(EColor::PIECE_COLOR_WHITE));
	m_fields[25]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[30]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[31]->PutPiece(new Queen(EColor::PIECE_COLOR_BLACK));
	m_fields[32]->PutPiece(new King(EColor::PIECE_COLOR_WHITE));
	m_fields[33]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[38]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[39]->PutPiece(new King(EColor::PIECE_COLOR_BLACK));
	m_fields[40]->PutPiece(new Bishop(EColor::PIECE_COLOR_WHITE));
	m_fields[41]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[46]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[47]->PutPiece(new Bishop(EColor::PIECE_COLOR_BLACK));
	m_fields[48]->PutPiece(new Knight(EColor::PIECE_COLOR_WHITE));
	m_fields[49]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[54]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[55]->PutPiece(new Knight(EColor::PIECE_COLOR_BLACK));
	m_fields[56]->PutPiece(new Rook(EColor::PIECE_COLOR_WHITE));
	m_fields[57]->PutPiece(new Pawn(EColor::PIECE_COLOR_WHITE));
	m_fields[62]->PutPiece(new Pawn(EColor::PIECE_COLOR_BLACK));
	m_fields[63]->PutPiece(new Rook(EColor::PIECE_COLOR_BLACK));

	Player whitePlayer;
	Player blackPlayer;

	modern_shared<PlayerStats>& whiteStats = whitePlayer.GetStats();
	modern_shared<PlayerStats>& blackStats = blackPlayer.GetStats();

	for (auto ele : m_fields)
	{
		ele->SetBoard(this);
		__int64 nummoves = ele->GetNumberOfMoves();
		if(ele->HasWhitePiece())
		whiteStats->AddMoves(nummoves);
		else if (ele->HasBlackPiece())
			blackStats->AddMoves(nummoves);
		std::cout << ele->GetIndex() << " " << ele->GetName() << " " << ele->GetPieceName() << " " << nummoves << " ";
		modern_array<IField*>& arr = ele->GetMoves();
		for (auto move : arr)
		{
			std::cout << move->GetName();
			std::cout << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "White " << whiteStats->GetNumberOfPossibleMoves() << std::endl;
	std::cout << "Black " << blackStats->GetNumberOfPossibleMoves() << std::endl;
}

StdBoard::~StdBoard()
{
}

IField* const _stdcall StdBoard::GetFieldByIndex(const __int64 index) const noexcept
{
	modern_shared_guard lock(this);
	return m_fields[index];
}
