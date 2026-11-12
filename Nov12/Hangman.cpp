#include<vector>
#include<iostream>
#include<string>

while (std::getline(fin, currentWord))
{
	words.push_back(currentWord);
}

std::cout << "The number of words is: " << words.size() << std::endl;

return words; 

}

std::vector<std::string> words;
std::string pickRandomNumber(std::vector<std::string> words)
{
	std::string randomWord;
	//srand(time(0));
	//rand()
	std::mt19937 rng(std::random_device{}());
	std::uniform_int_distribution<int> distribution(0, words.size() - 1)
	int RandomIndex = distribution(rng);
	randomWord = words[randomIndex];




	return randomWord;
}



