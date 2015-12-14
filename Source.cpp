#include <iostream>

int main()
{
	readPlainText();
	substituteBytes();
	shiftRows();
	mixColumns();
	addRoundKey();
	printOutput();
	return 0;
}