#include <iostream>
#include <string>
using namespace std;

string keyword(string sentence)
{
	//ALLISON DOES THIS PART
	string* words;
	int numWords = 1;
	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == ' ')
		{
			numWords++;
		}
	}

	words = new string[numWords];
	for (int i = 0; i < setence.size(); i++)
	{
		int counter = 0;
		while (sentence[i] != ' ')
		{
			string[counter].append(sentence[i]);
			i++;
		}
		counter++;
		i++;
	}
}

bool negative(string sentence)
{
	//wasn't, not, won't
	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] = ' ')
		{
			//blah
		}
	}
	//PAUL DOES THIS PART JINGLE BELLS
}
int main()
{
	string response;
	string keyWord;
	bool isNeg;
	cout << "Hello! How are you!\n";
	getline(cin, response);
	keyWord = keyword(response);
	isNeg = negative(response);
	if (keyWord == good && isNeg == TRUE)
	{
		//later DECK THE HALLS 
	}

}