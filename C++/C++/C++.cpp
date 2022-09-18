#include <iostream>
#include <string>

class StringArray
{
private:
	std::string arrStr;
public:
	void ShowArrStr()
	{
		std::cout << arrStr;
	}

	void SetArrStr()
	{
		std::cin >> arrStr;
	}

	int GetStrLen(StringArray)
	{
		int strlen = arrStr.size();
		return strlen;
	}
};

int main()
{
	const int arrSize = 100;
	StringArray str1[arrSize], str2[arrSize];
	char ch; int count = 0; int j = 0;

	do
	{
		std::cout << "Enter word #" << count + 1 << " and hit ENTER" << std::endl;
		str1[count].SetArrStr();
		std::cout << std::endl;
		std::cout << "Another one? (y/n): "; std::cin >> ch;
		std::cout << std::endl;
		count++;
	} while (ch != 'n');

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Your entered words:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << i + 1 << ".";
		str1[i].ShowArrStr();
		std::cout << "\t";
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < count; i++)
	{
		if (str1[i].GetStrLen(str1[i]) <= 3)
		{
			str2[j] = str1[i];
			j++;
		}
	}

	std::cout << "Words with less 4 symbols: " << std::endl;
	for (int i = 0; i < j; i++)
	{
		std::cout << i + 1 << ".";
		str2[i].ShowArrStr();
		std::cout << "\t";
	}

	return 0;
}