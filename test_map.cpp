#include <iostream>
#include <cstring>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<string, int> waitingNum { {"KIM", 1}, { "BAM",2 }, { "SIM",3 }, { "BONG",4 }, { "SAM",5 } };
	//unordered_map<string,int>::iterator findName = waitingNum.find("SAM"); ��ȯ��
	auto findName = waitingNum.find("SAM");

	if (waitingNum.empty())	{cout << "empty" << endl;} // ����ִ��� Ȯ��
	if (waitingNum.end() == waitingNum.begin()) { cout << "empty2" << endl; } // ����ִ��� Ȯ��

	if (findName == waitingNum.end())
	{
		cout << "not find" << endl;
	}
	else
	{
		cout << findName->first << " " << findName->second<< endl;
	}// ��� SAM 5

	cout << waitingNum.count("KIM"); // ��� 1
}