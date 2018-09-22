class CharGenerator {
public:
	CharGenerator(char initialChar = 'a');
	char generateNextChar();
	
private:
	char nextChar;
};