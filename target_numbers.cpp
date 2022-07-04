#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

//제한 사항 : numbers 개수 2~20개, 1~50 자연수 | 타겟 넘버 : 1~1000 자연수
//(numbers 총합 - target) / 2 보다 작은 수를 찾아야한다.

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
    //numbers_list.erase(remove_if(numbers_list.begin(), numbers_list.end(), not_odd),numbers_list.end()); // 홀수 제거
    numbers.erase(remove_if(numbers.begin(), numbers.end(), not_odd),numbers.end()); // 홀수 제거

    for (int i : numbers_list) cout << i << ": numbers_list" << endl;
    for(int i : numbers) cout << i << ": numbers " << endl;
    cout << solution(numbers, target);
}