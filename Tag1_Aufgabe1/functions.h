#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

#define MAX_WIDTH 80

static unsigned char c = 'a';

enum Direction {
	Left = -1,
	Right = 1
};

char nextChar();
void printNewline(int n);
void printSpaces(int n);
void printStars(int n);
void printChars(int n);
void printFigure(int n, Direction direction);

namespace fun {
	void giveMeAConsoleFigure();
}

#endif