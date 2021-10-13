#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 'x';
	}
	catch(int x)
	{
		cout << " Caught int " << x;
	}
	catch(...)
	{
		cout << "Default catch block";
	}
}
