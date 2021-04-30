#pragma once

#define FIELD_A1 0
#define FIELD_A2 1
#define FIELD_A3 2
#define FIELD_A4 3
#define FIELD_A5 4
#define FIELD_A6 5
#define FIELD_A7 6
#define FIELD_A8 7

#define FIELD_B1 8
#define FIELD_B2 9
#define FIELD_B3 10
#define FIELD_B4 11
#define FIELD_B5 12
#define FIELD_B6 13
#define FIELD_B7 14
#define FIELD_B8 15

#define FIELD_C1 16
#define FIELD_C2 17
#define FIELD_C3 18
#define FIELD_C4 19
#define FIELD_C5 20
#define FIELD_C6 21
#define FIELD_C7 22
#define FIELD_C8 23

#define FIELD_D1 24
#define FIELD_D2 25
#define FIELD_D3 26
#define FIELD_D4 27
#define FIELD_D5 28
#define FIELD_D6 29
#define FIELD_D7 30
#define FIELD_D8 31

#define FIELD_E1 32
#define FIELD_E2 33
#define FIELD_E3 34
#define FIELD_E4 35
#define FIELD_E5 36
#define FIELD_E6 37
#define FIELD_E7 38
#define FIELD_E8 39

#define FIELD_F1 40
#define FIELD_F2 41
#define FIELD_F3 42
#define FIELD_F4 43
#define FIELD_F5 44
#define FIELD_F6 45
#define FIELD_F7 46
#define FIELD_F8 47

#define FIELD_G1 48
#define FIELD_G2 49
#define FIELD_G3 50
#define FIELD_G4 51
#define FIELD_G5 52
#define FIELD_G6 53
#define FIELD_G7 54
#define FIELD_G8 55

#define FIELD_H1 56
#define FIELD_H2 57
#define FIELD_H3 58
#define FIELD_H4 59
#define FIELD_H5 60
#define FIELD_H6 61
#define FIELD_H7 62
#define FIELD_H8 63

static const char* FIELD_NAME[] =
{ 
"A1","A2","A3","A4","A5","A6","A7","A8",
"B1","B2","B3","B4","B5","B6","B7","B8", 
"C1","C2","C3","C4","C5","C6","C7","C8", 
"D1","D2","D3","D4","D5","D6","D7","D8", 
"E1","E2","E3","E4","E5","E6","E7","E8", 
"F1","F2","F3","F4","F5","F6","F7","F8", 
"G1","G2","G3","G4","G5","G6","G7","G8", 
"H1","H2","H3","H4","H5","H6","H7","H8"
};

static const char* PIECE_NAME[] =
{
	"PAWN","ROOK","KNIGHT","BISHOP","QUEEN","KING"
};

#include "modern_array.h"
#include "modern_class.h"
#include "modern_guard.h"
#include "modern_shared_guard.h"