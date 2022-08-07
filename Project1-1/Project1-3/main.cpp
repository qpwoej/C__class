#include <iostream>
using namespace std;

int main(void)
{
    int currentHP;
    int currentSTR=30;
    int currentDPS=30;
    int currentGRD=2;
        
    cin >> currentHP;

    currentHP -= (currentSTR*currentGRD)/currentDPS;
        cout << "현재 내 체력 :" << currentHP << endl;

    return 0;
}