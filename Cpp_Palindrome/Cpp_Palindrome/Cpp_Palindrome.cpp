#include <iostream>

std::string Reverse(std::string x)
{
	std::string y;
	for (int i = x.length() - 1; i >= 0; i--) 
	{
			y += x.at(i);
	}
	return y;
}

bool isPalindromeWithReverse(std::string x)
{
	return (x == Reverse(x)) ? true : false;
}

bool isPalindrome(std::string x)
{
	for (int i = 0; i < x.length() / 2; i++)
	{
		if (x.at(i) == x.at(x.length() - 1 - i))
		{
			continue;
		}
		else
		{
			return false;
		}
		return true;
	}
}

int main()
{
	std::string test = "level";
	std::cout << std::boolalpha << isPalindrome(test);
}