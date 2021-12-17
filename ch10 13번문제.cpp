#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int>dic;
    int index;
    string name;
    int score;
    
    cout << "****** 점수관리 프로그램 High Score를 시작합니다 ******" << endl;
    
    while(true)
    {
        cout << "입력: 1, 조회:2, 종료:3 >> ";
        cin >> index;
        
        if(index == 1)
        {
            
            
            cout << "이름과 점수>> ";
            cin >> name >> score;
            dic.insert(make_pair(name, score));
        }
        
        else if(index == 2)
        {
            cout << "이름 >> ";
            cin >> name;
            
            if(dic.find(name) == dic.end())
                cout << "찾는 이름이 없습니다 " << endl;
            else
                cout << name << "의 점수는 " << dic[name] << endl;
        }
        
        else if(index == 3)
        {
            cout << "프로그램을 종료합니다..." << endl;
            break;
        }
    }
}
