#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int number;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        printf("&d\n", i);
    }
    _getch();
    return 0;

}
/*#include <conio.h>  _getch(); 
  printf("&d", i); &d 자리에 i가 들어감 
  printf("&d\n", i); 줄바꿈
*/