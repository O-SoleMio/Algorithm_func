//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//bool solution(vector<string> phone_book) {
//    bool answer = true;
//
//    unordered_map<string,int> phone_map;
//    pair<string,int> insert_pair;
//    for (int i = 0; i < phone_book.size(); i++)
//    {
//        insert_pair = make_pair(phone_book[i],i);
//        phone_map.insert(insert_pair);        
//    }
//
//    auto f = phone_map.find("12");
//
//    if(f != phone_map.end()) 
//    {
//        cout << f->second << endl;
//    }
//    
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> phone_book = { "12","12","1235","567","88"};
//    cout << solution(phone_book);
//}