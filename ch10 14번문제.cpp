#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string>dic;
    string name, password;
    int index;
    
    cout << "암호 관리 프로그램 WHO를 시작합니다 " << endl;
    
    while(true)
    {
        cout << "삽입:1, 검사:2, 종료:3>> ";
        cin >> index;
        
        switch (index) {
            case 1:
                cout << "이름 암호 >> ";
                cin >> name >> password;
                dic.insert(make_pair(name, password));
                break;
            case 2:
                cout << "이름? ";
                cin >> name;
                
                
                while(true)
                {
                    cout << "암호? ";
                    cin >> password;
                    if(dic[name] == password){
                        cout << "통과!! " << endl;
                        break;
                    }
                else
                    cout << "실패!! " << endl;
                }
                break;
                
        }
        if(index == 3)
        {
            cout << "프로그램을 종료합니다... " << endl;
            break;
        }
    }
}
