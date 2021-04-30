#include "IField.h"

modern_array<IField*>& IField::GetWhitePawnMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

modern_array<IField*>& IField::GetWhiteKnightMoves()
{
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

modern_array<IField*>& IField::GetMoves()
{
	if(m_piece == nullptr)
	{

		modern_array<IField*>* fields = new modern_array<IField*>();
		return *fields;
	}
	switch (m_piece->GetType())
	{
	case EPieceType::PAWN:
		if (m_occupancy == EOccupancy::FIELD_OCCUPANCY_WHITE)
			return GetWhitePawnMoves();
		break;
	case EPieceType::KNIGHT:
		if (m_occupancy == EOccupancy::FIELD_OCCUPANCY_WHITE)
			return GetWhiteKnightMoves();
		break;
}
	modern_array<IField*>* fields = new modern_array<IField*>();
	return *fields;
}

const char* const IField::GetName() const
{
	return FIELD_NAME[GetIndex()];
}

const char* const IField::GetPieceName() const
{
	if (m_piece == nullptr)
		return "EMPTY";
	return PIECE_NAME[enum_cast<__int32>(m_piece->GetType())];
}

const __int64 IField::GetNumberOfMoves()
{
#pragma warning(suppress : 4703)
	modern_array<IField*> arr = GetMoves();
	return arr.size();
}

void IField::PutPiece(IPiece* const piece)
{
	m_piece = piece;
	m_piece->SetField(this);
	if (piece->GetColor() == EColor::PIECE_COLOR_WHITE)
		m_occupancy = EOccupancy::FIELD_OCCUPANCY_WHITE;
	else
	m_occupancy = EOccupancy::FIELD_OCCUPANCY_BLACK;
}

void IField::SetBoard(
	class IBoard* const board
)
{
	m_board = board;
}

bool IField::IsEmpty() const noexcept
{
		if (m_occupancy == EOccupancy::FIELD_OCCUPANCY_UNOCCUPIED)
			return true;
		return false;
}

bool IField::HasBlackPiece() const noexcept
{
	if (m_occupancy == EOccupancy::FIELD_OCCUPANCY_BLACK)
		return true;
	return false;
}

bool IField::IsEmptyOrBlack() const noexcept
{
	if (m_occupancy == EOccupancy::FIELD_OCCUPANCY_WHITE)
		return false;
	return true;
}
