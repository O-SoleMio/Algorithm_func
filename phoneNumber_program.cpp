#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_map<string,int> number_map;

    for (auto s : phone_book)    
        number_map[s] = s.size();

    for (auto s : phone_book)
        
    return answer;
}

int main()
{
    vector<string> phone_book = { "119", "97674223", "1195524421"};
    solution(phone_book);
}