#include <iostream>
using namespace std;

int main(void)
{
    int defense = 0;
    int myheart=50;
    int monsterheart=60;
    int check;

    cout << "�氡�� ������ ���ڰ� �ִ�" << endl;
    cout << "1. �����غ���" << endl;
    cout << "2. �׳� ��������" << endl;
    

    cin >> check;

    switch (check)
    {
    case 1:
        myheart +=50;
        cout << "�ȿ��� ��Ⱑ�ִ�. ü���� 50�����Ͽ���. " << myheart << endl;
        break;
    case 2:
        cout << "�������� �����ƴ�" << endl;
        break;
        
    }

   
    if (check == 1)
    {
        cout << "1. �� ü��" << myheart << endl;
        cout << "2. ��� ü��" << monsterheart << endl;
        cout << "2. ��� ü���� ������ ���� (�¸�)" << myheart << monsterheart << endl;

    }


    else if(check != 1)
    {
        cout << "1. �� ü��"<< myheart<< endl;
        cout << "2. ��� ü��" << monsterheart << endl;
        cout << "2. ��� ü���� �ʹ� ���� (�й�)" << myheart << monsterheart << endl;
    }
    cin >> check;

    return 0;
}