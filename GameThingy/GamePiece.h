#pragma once
class GamePiece
{
public:
	GamePiece(int c, int r, bool b) : currentRow(r), currentCol(c), isBlack(b) {}
	virtual ~GamePiece();

	//Piece tries to move to given row, column, return true if valid move, fals else
	virtual bool Move(int r, int c) = 0;

	int currentRow, currentCol;
	bool isBlack;
};

