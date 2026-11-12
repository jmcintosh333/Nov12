// Nov12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include"Hangman.h"

int main()
{
    std::string  absouluteFilePath = "C://Users//Work//Downloads//popular.txt";
    std::vector<std::string> dictionaryWords = getAllDictionaryWords(absouluteFilePath);
    for (int index = 0; index < 10; ++index)
    {
        std::cout << "The random word to guess is: " << pickRandomWord(dictionaryWords);

    }
}

