/*
It's pretty straightforward. Your goal is to create a function that removes the first and
last characters of a string. You're given one parameter, the original string. You don't
have to worry with strings with less than two characters.
*/
#include<iostream>
#include<string>

using namespace std;

string sliceString(string str)
{
	/*
	str.erase(0, 1);
	int fin = str.length();
	str.erase(fin-1, 1);
	*/
	// your code is here ... Hope You Enjoy !!

	std::cout << str.substr(1,str.size()-2);

	return str;
}

int main()
{
	sliceString("country");
}
	/*
	tuna
	0123
	 u a	01

	*/