#include <bits/stdc++.h>
using namespace std;
bool isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}
int getPriority(char C)
{
	if (C == '-' || C == '+')
		return 1;
	else if (C == '*' || C == '/')
		return 2;
	else if (C == '^')
		return 3;
	return 0;
}

string infixToPrefix(string infix)
{

	int l = infix.size();

	reverse(infix.begin(), infix.end());

	for (int i = 0; i < l; i++) {

		if (infix[i] == '(') {
			infix[i] = ')';
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
		}
	}

	string prefix = infixToPostfix(infix);


	reverse(prefix.begin(), prefix.end());

	return prefix;
}


int main()
{
	string s = ("x+y*z/w+u");

	cout << infixToPrefix(s) << std::endl;
	return 0;
}
