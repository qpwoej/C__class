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
        cout << "���� �� ü�� :" << currentHP << endl;

    return 0;
}