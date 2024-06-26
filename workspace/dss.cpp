#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
using namespace std;
vector<string> split(string str, char Delimiter)
{
    istringstream iss(str); // istringstream에 str을 담는다.
    string buffer;          // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
    vector<string> result;

    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter))
    {
        result.push_back(buffer); // 절삭된 문자열을 vector에 저장
    }
    return result;
}

    ifstream in("/home/lms/update.csv",ios_base::in);
    string buffer;
    vector<string> result;
    map<string,int> utom;//고유번호 시장번호
    int a;    
    while (getline(in,buffer))
    {
        result=split(buffer,',');
        a=stoi(result[1]);
        utom.insert(pair<string,int>(result[0],a));    
    }
    in.close();
 

