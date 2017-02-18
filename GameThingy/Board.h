#pragma once
class Board
{
public:
	Board();
	~Board();

	bool isValidTile(int r, int c) { return !(r < 0 || c < 0 || r >= numRows || r >= numCols); }

	int numRows, numCols;


};

