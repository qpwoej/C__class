#include <iostream>
using namespace std;

int main(void)
{
    int damage = 10;
    int check;
    int check2;

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

    switch (check)
    {
        cout << "3. 그냥 지나간다" << endl;
        cout << "4. 상대는 강해보인다." << endl;
    case 3:
        damage += 5;
        cout << " " << endl;
        break;
    case 4:
        cout << "" << endl;
        break;

    }

   
    return 0;
}