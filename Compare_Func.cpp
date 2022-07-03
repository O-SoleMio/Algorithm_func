#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int cmp(int a,int b)
{
	if (a > b + 3)
		return b;
}

int main()
{
	vector<int> numbers = {0,10,2,3,5,8,9};

	sort(numbers.begin(), numbers.end());
	for (int i : numbers) cout << i << endl;
}