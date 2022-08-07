#include <iostream>
using namespace std;

int main(void)
{
    int damage = 10;
    int defense = 0;
    int check;

    cout << "길가에 수상한 상자가 있다" << endl;
    cout << "1. 조사해본다" << endl;
    cout << "2. 그냥 지나간다" << endl;
    

    cin >> check;

    switch (check)
    {
    case 1:
        damage +=5;
        cout << "안에는 쿠기가있다. 데미지가 5증가하였다. " << damage << endl;
        break;
    case 2:
        cout << "누군가와 마주쳤다" << endl;
        break;
        
    }

   
    if (check == 1)
    {
        cout << "누군가와 마주쳤다" << endl;

    }

    else if(check != 1)
    {
        cout << "1. 공격 (현재 공격력:"<< damage << endl;
        cout << "2. 방어 (현재 방어력:" << defense << endl;
    }
    cin >> check;

    return 0;
}