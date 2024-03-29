#pragma once
#include "gdef.h"
#include "IPiece.h"
#include "EOccupancy.h"

class IField
{
protected:
	class IBoard* m_board;
	enum class EOccupancy m_occupancy;
	class IPiece* m_piece;
public:
	virtual const __int64 _stdcall GetIndex() const noexcept = 0;
	virtual modern_array<IField*>& GetWhitePawnMoves();
	virtual modern_array<IField*>& GetWhiteKnightMoves();
	virtual modern_array<IField*>& GetWhiteRookMoves();
	virtual modern_array<IField*>& GetWhiteBishopMoves();
	modern_array<IField*>& GetMoves();
	const char* const GetName() const;
	const char* const GetPieceName() const;
	const __int64 GetNumberOfMoves();
	void PutPiece(class IPiece* const piece);
	void SetBoard(class IBoard* const board);
	bool IsEmpty() const noexcept;
	bool HasBlackPiece() const noexcept;
	bool HasWhitePiece() const noexcept;
	bool IsEmptyOrBlack() const noexcept;
};

