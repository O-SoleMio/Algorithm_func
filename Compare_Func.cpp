//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int cmp(int a, int b) {
//	if (a % 2 && b % 2) { // �Ѵ� Ȧ��
//		return a > b;
//	}
//	else if (a % 2) { // a�� Ȧ��
//		return 0;
//	}
//	else if (b % 2) { // b�� Ȧ��
//		return 1;
//	}
//	return a > b; // �Ѵ� ¦��
//}
//
//
//int main()
//{
//	vector<int> numbers = {1,2,3,4,5,6,7,8,9};
//
//	sort(numbers.begin(), numbers.end(),cmp);
//	
//	for (int i : numbers) cout << i << endl;
//}