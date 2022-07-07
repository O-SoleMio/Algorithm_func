#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book.size(); j++)
        {
            if (phone_book[i].find(phone_book[j]) == 0 && i != j)
            {
                answer = false;
                return answer;
            }
        }
    }
    return answer;
}

int main()
{
    vector<string> phone_book = { "119","97674223","1195524421" };
    cout << solution(phone_book);
}