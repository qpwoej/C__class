#include <iostream>
using namespace std;

int main(void)
{
    int damage = 10;
    int defense = 0;
    int check;

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

   
    if (check == 1)
    {
        cout << "�������� �����ƴ�" << endl;

    }

    else if(check != 1)
    {
        cout << "1. ���� (���� ���ݷ�:"<< damage << endl;
        cout << "2. ��� (���� ����:" << defense << endl;
    }
    cin >> check;

    return 0;
}