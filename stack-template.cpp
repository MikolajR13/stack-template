
#include <iostream>
#include<typeinfo>
#include"stos.h"
using namespace std;
int main()
{
	stos<int, 3>stosint;
	stosint.push(20);
	stosint.top();
	stosint.pop();
	stos<char, 10>stoschar;
	stoschar.push('a');
	stoschar.push('g');
	stoschar.top();
	stoschar.~stos();
	stosint.~stos();
}
