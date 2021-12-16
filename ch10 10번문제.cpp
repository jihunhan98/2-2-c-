#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Nation{
    string nation;
    string capital;
public:
    Nation(string nation, string capital){this->nation = nation, this->capital = capital;}
    bool compare(string nation);
};

bool Nation::compare(string nation)
{
    if(this->nation == nation)
        return true;
    return false;
}



int main()
{
    vector<Nation>v;
    v.push_back(Nation("대한민국", "서울"));
    v.push_back(Nation("중국", "베이징"));
    v.push_back(Nation("북한", "평양"));
    v.push_back(Nation("미국", "와싱턴"));
    v.push_back(Nation("대만", "타이베이"));
    v.push_back(Nation("캐나다", "오타와"));
    v.push_back(Nation("스위스", "제네바"));
    v.push_back(Nation("프랑스", "파리"));
    v.push_back(Nation("이집트", "카이로"));
    
    int index;
    string nation, capital;
    bool toggle;
    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. ******" << endl;
    while(true)
    {
        cout << "정보 입력: 1, 퀴즈: 2 , 종료: 3 >>";
        cin >> index;
        
        switch (index) {
            case 1:
                toggle = true;
                cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다. " << endl;
                cout << "나라와 수도를 입력하세요(no no이면 입력 끝) " << endl;
               
                while(true)
                {
                    cout << v.size()+1 << ">>";
                    cin >> nation >> capital;
                    
                    if(nation == "no" && capital == "no")
                        break;
                    
                    for(int i=0; i<v.size(); i++)
                    {
                        if(v.at(i).compare(nation))
                        {
                            toggle = false;
                            cout << "already exist!!!" << endl;
                            break;
                        }
                    }
                    
                    if(toggle)
                        v.push_back(Nation(nation,capital));
                }
                break;
                
            default:
                break;
        }
        
    }
}
