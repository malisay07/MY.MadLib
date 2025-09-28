#include <iostream>
#include <conio.h>

using namespace std;

struct Entry
{
	string type;
	string input;
};

int main()
{
	string UserMistake;
	string fixChoice;
	bool FixMistake = false;
	int entryNum;

	const int Size = 14;
	Entry entries[Size] = {
		{"adjective", ""},
		{"adjective", ""},
		{"type of bird", ""},
		{"room in a house", ""},
		{"verb (past tense)", ""},
		{"verb", ""},
		{"relative's name", ""},
		{"noun", ""},
		{"a liquid", ""},
		{"verb ending in -ing", ""},
		{"part of the body (plural)", ""},
		{"plural noun", ""},
		{"verb ending in -ing", ""},
		{"noun", "" }

	};

	for (int i = 0; i < Size; i++)
	{
		cout << (i + 1) << ". Enter a " << entries[i].type << ": ";
		cin >> entries[i].input;
	}

	do
	{
		cout << "\nDo you want to fix any mistakes? (y/n): \n";
		cin >> UserMistake;

		if (UserMistake == "y" || UserMistake == "Y")
		{

			cout << "\nWhich entry would you like to fix? (1-12): \n";
			cin >> entryNum;
			cout << entryNum;
			FixMistake = true;
		}
		else if (UserMistake == "n" || UserMistake == "N")
		{
			cout << "\nYour Mad Lib: \n";
			cout << "\nIt was a " << entries[0].input << ", cold September day. I woke up to the " << entries[1].input << " smell of " << entries[2].input << " roasting in the " << entries[3].input << " downstairs. I " << entries[4].input << " down the stairs to see if I could help " << entries[5].input << "the dinner. My mom said, 'See if " << entries[6].input << " needs a fresh " << entries[7].input << "'. So I carried a tray of glasses full of " << entries[8].input << " into the " << entries[9].input << " room. When I got there, I couldn't believe my " << entries[10].input << "! There were " << entries[11].input << " " << entries[12].input << " on the " << entries[13].input << "!";

		}
		else
		{
			cout << "Invalid input. Please enter 'y' for yes or 'n' for no.";
		}
	} while (UserMistake == "y" || UserMistake == "Y");

	(void)_getch();
	return 0;
}
