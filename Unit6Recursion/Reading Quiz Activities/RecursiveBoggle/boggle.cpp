#include "boggle.h"

Boggle::Boggle()
{
  clear();
}

Boggle::~Boggle()
{
}

string Boggle::getBoardString()
{
  int x, y = 0;
	stringstream boardStr;
	
	for(y = 0; y < SIZE; ++y)
	{
		for (x = 0; x < SIZE; ++x)
		{
			boardStr << board[x][y];

			if( x != SIZE - 1)
			{
				boardStr << " ";
			}
		}
		if(y != SIZE -1)
		{
			boardStr << endl;		
		}
	}
	return boardStr.str();
}

void Boggle::createRandomBoard()
{
  srand (time(NULL));
	string alpha = "abcdefghijklmnopqrstuvwxyz";

	int x, y = 0;
	for(y = 0; y < SIZE; ++y)
	{
		for (x = 0; x < SIZE; ++x)
		{
			board[x][y] = alpha[rand() % alpha.size()];
		}
	}	
}

bool Boggle::importBoard(string file_name)
{
  ifstream ifs;
	string line;
	int x,y = 0;
	string boardValues[SIZE][SIZE];
	
	//open the file
	ifs.open(file_name, ifstream::in);

	if(!ifs.is_open())
	{
		cout << "File " << file_name << "failed to open." << endl;
		return false;
	}
	
}

bool Boggle::importDictionary(string file_name)
{
  // TODO
}

void Boggle::setMinWordLength(int length)
{
  // TODO
}

bool Boggle::isWord(string word)
{
  // TODO
}

bool Boggle::isPrefix(string prefix)
{
  // TODO
}

bool Boggle::findPrefix(string root, int start, int end, bool fullWordOnly)
{
  // TODO
}

set<string> Boggle::solveBoard()
{
  // TODO
}

void Boggle::findWords(string root, unordered_set<string> path, set<string>& wordsFound, int x, int y)
{
  // TODO
}

void Boggle::clear()
{
  // TODO
}

void Boggle::setBoard(string boardValues[SIZE][SIZE])
{
  // TODO
}
