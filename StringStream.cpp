#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
/*
Contributor: Ankit
Problem Statement: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
Happy Coding!!!!!

*/

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> arr;
   
    stringstream ss(str);
    int a;
    char  ch;
    while(ss){
        if(ss>>a) arr.push_back(a);      // Extrracting the numbers nand commas(char) from string(str variable)
        ss>>ch;
    }
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
