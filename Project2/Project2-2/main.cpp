#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++) 
        {
            /*cout << "*";*/
            printf("*");
        }
       /* cout << endl;*/
        printf("\n");
    }
    _getch();
    return 0;

}

/* i는 n이 될때까지 반복
   j는 별을 출력하기 위한 반복문
*/
