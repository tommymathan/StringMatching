
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "stringmatch.h"
using namespace std;

stringmatch::stringmatch(string inputText, string patternInput)
{
	text = inputText;
	pattern = patternInput;
}		

int stringmatch::getNumberofMatches()
{
	comparisons = 0;
	int stringLength = text.length();
	char * textConvertedToChars = new char[text.length()+1];
	strcpy(textConvertedToChars, text.c_str());

	//for(int i = 0; i

}