#include <iostream>
using namespace std;

int main(void)
{
    
    int enemyHP[5]; /* {123, 234, 456};*/
    int minEnemy = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> enemyHP[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enemy[" << i << "] :" << enemyHP[i] << endl;
        if (enemyHP[minEnemy] > enemyHP[i])
        {
            minEnemy = i;
        }
    }

    cout << "가장 체략이 적은 적 : Enemy["<< minEnemy << "]" << endl;
    cout << "가장 체략이 적은 적의 : HP ["<< enemyHP[minEnemy] << "]" << endl;



return 0;

}

