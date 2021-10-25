// CPP program to illustrate
// Implementation of empty() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{};
	if (myvector.empty())
	{
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}
