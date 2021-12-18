#include <iostream>
using namespace std;

class Printer{
protected:
    string name;
    int paper,ink;
    virtual bool ablePrint(int paper) = 0;
    virtual void print() = 0;
public:
    void getInfo(){cout << name << " , 남은 종이" << paper << ", 남은 잉크 " << ink << endl;}

};


class InkJet : public Printer{
public:
    InkJet(string name, int paper, int ink){this->name = name,
        this->paper = paper, this->ink = ink;}
    bool ablePrint(int paper);
    void print(){this->paper -= paper, this->ink -= paper;}
};

bool InkJet::ablePrint(int paper)
{
    if(this->paper < paper || this->ink < paper)
        return false;
    return true;
}

class LaserPrint : public Printer{
public:
    LaserPrint(string name, int paper, int ink){this->name = name,
        this->paper = paper, this->ink = ink;}
    bool ablePrint(int paper);
    void print(){this->paper -= paper, this->ink -= 1;}
};

bool LaserPrint::ablePrint(int paper)
{
    if(this->paper < paper || this->ink <1)
        return false;
    return true;
}

int main()
{
    string toggle = "y";
    int index,pages;
    InkJet inkjet("Officejet V40, HOP", 5,10);
    LaserPrint laserprint("SCX-6*45, 삼성전자", 3,20);
    
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다. " << endl;
    while(toggle!="n")
    {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
        cin >> index >>pages;
        if(index == 1)
        {
            if(inkjet.ablePrint(pages)){
                inkjet.print();
                cout << "프린트를 하였습니다. " << endl;
            }
            else
                cout << "프린트를 할 수 없습니다. " << endl;
        }
        else if(index == 2)
        {
            if(laserprint.ablePrint(pages))
            {
                laserprint.print();
                cout << "프린트를 하였습니다. " << endl;
            }
            else
                cout << "프린트를 할 수 없습니다. " << endl;
        }
        inkjet.getInfo();
        laserprint.getInfo();
        cout << "계속 프린트를 하겠습니까? (y/n) >> ";
        cin >> toggle;
    }
}
