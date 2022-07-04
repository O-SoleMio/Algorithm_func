#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

//���� ���� : numbers ���� 2~20��, 1~50 �ڿ��� | Ÿ�� �ѹ� : 1~1000 �ڿ���
//(numbers ���� - target) / 2 ���� ���� ���� ã�ƾ��Ѵ�.

void Recursive_numbers(vector<int> limit_numbers,int index,int limit_number)
{
    if (limit_number == limit_numbers[index])
        cout << limit_numbers[index] << " : find!" << endl;
    else
        cout << limit_numbers[index] << " : is not" << endl;

    index += 1;

    if (index == limit_numbers.size())
        return;
    
    Recursive_numbers(limit_numbers,index,limit_number);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int total_number = 0;
    int limit_number = 0;
    vector<int> limit_numbers;
    for (int i : numbers) total_number += i;

    limit_number = (total_number - target) / 2;

    for (int i : numbers)
    {
        if (limit_number >= i)
        {
            limit_numbers.push_back(i);
        }
    }

    Recursive_numbers(limit_numbers, 0, limit_number);

    cout << target << endl;

    
    return answer;
}

bool not_odd(int a)
{
    if (a % 2 != 0)
        return true;
    else
        return false;
}

int main()
{  
    list<int> numbers_list = {1,2,3,4,5,6,7,8};
    vector<int> numbers = { 4, 1, 2 ,1 };
    int target = 4; // return 2
    list<int>::iterator numbers_list_iter = numbers_list.begin();
    //numbers_list.remove(1);
    //numbers_list.erase(remove_if(numbers_list.begin(), numbers_list.end(), not_odd),numbers_list.end()); // Ȧ�� ����
    numbers.erase(remove_if(numbers.begin(), numbers.end(), not_odd),numbers.end()); // Ȧ�� ����

    for (int i : numbers_list) cout << i << ": numbers_list" << endl;
    for(int i : numbers) cout << i << ": numbers " << endl;
    cout << solution(numbers, target);
}