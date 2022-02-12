

#include <iostream>


std::string reverseString(std::string theString);

int main()
{
	std::string original = "Jumbol Tron";
	std::cout << "Original: " << original << std::endl;
	const std::string originalReversed = reverseString(original);
	std::cout << "Original Reversed: " << originalReversed << std::endl;


	return 0;
}


std::string reverseString(std::string theString)
{
	int stringLength = theString.length();
	char temp;
	for (int count = 0; count < stringLength / 2; count++)
	{
		temp = theString[count];
		theString[count] = theString[stringLength - (count + 1)];
		theString[stringLength - (count + 1)] = temp;
	}


	return theString;
}