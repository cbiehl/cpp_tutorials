#include "CharGenerator.hpp"

enum Direction {
	Left = -1,
	Right = 1
};

class PatternPrinter{
public:
	PatternPrinter();
	void printPattern(int n, Direction direction);
	
private:
	CharGenerator charGen;
	void printNSpaces(int n);
	void printNChars(int n);
	int readWidth();
};