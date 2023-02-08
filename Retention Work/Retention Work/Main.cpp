#include <iostream>
#include<string>

int main()
{
	std::string array[] = { "R","A","C","E","C","A","R" };
	std::string word = "";
	std::string newWord = "";

	for (int i = 0; i < 7; i++)
	{
		std::cout << array[i] << std::endl;
		word += array[i];
	}

	std::cout << "" << std::endl;
	
	for (int i = 7-1; i >= 0; i--)
	{
	std:: cout << array[i] << std::endl;
	newWord += array[i];
	}

	if (word == newWord)
	{
		std::cout << " Theses words " << word << " are a Palindrome " << newWord << std::endl;
	}
	else
	{
		std::cout << " Not a palindrome " << std::endl;

	}
	system("Pause");
	return 0;
}
