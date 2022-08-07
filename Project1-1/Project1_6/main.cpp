#include <iostream>
using namespace std;

int main(void)
{
    int defense = 0;
    int myheart=50;
    int monsterheart=60;
    int check;

    cout << "길가에 수상한 상자가 있다" << endl;
    cout << "1. 조사해본다" << endl;
    cout << "2. 그냥 지나간다" << endl;
    

    cin >> check;

    switch (check)
    {
    case 1:
        myheart +=50;
        cout << "안에는 쿠기가있다. 체력이 50증가하였다. " << myheart << endl;
        break;
    case 2:
        cout << "누군가와 마주쳤다" << endl;
        break;
        
    }

   
    if (check == 1)
    {
        cout << "1. 내 체력" << myheart << endl;
        cout << "2. 상대 체력" << monsterheart << endl;
        cout << "2. 상대 체력은 나보다 적다 (승리)" << myheart << monsterheart << endl;

    }


    else if(check != 1)
    {
        cout << "1. 내 체력"<< myheart<< endl;
        cout << "2. 상대 체력" << monsterheart << endl;
        cout << "2. 상대 체력이 너무 많다 (패배)" << myheart << monsterheart << endl;
    }
    cin >> check;

    return 0;
}