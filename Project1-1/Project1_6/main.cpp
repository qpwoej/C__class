#include <iostream>
using namespace std;

int main(void)
{
    int damage = 10;
    int check;
    int check2;

    cout << "�氡�� ������ ���ڰ� �ִ�" << endl;
    cout << "1. �����غ���" << endl;
    cout << "2. �׳� ��������" << endl;
    

    cin >> check;

    switch (check)
    {
    case 1:
        damage +=5;
        cout << "�ȿ��� ��Ⱑ�ִ�. �������� 5�����Ͽ���. " << damage << endl;
        break;
    case 2:
        cout << "�������� �����ƴ�" << endl;
        break;
        
    }

    switch (check)
    {
        cout << "3. �׳� ��������" << endl;
        cout << "4. ���� ���غ��δ�." << endl;
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