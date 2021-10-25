#include <iostream>
#include <vector>
using namespace std;
 


int main()
{
    int sum = 0;
    vector<int> myvector{ 1, 5, 6, 3, 9, 2 };
    while (!myvector.empty())
    {
        sum = sum + myvector.back();
        myvector.pop_back();
    }
    cout << sum;
    return 0;
}
