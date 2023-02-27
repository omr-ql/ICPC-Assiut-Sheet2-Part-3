#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int new_num1 = num1;
    int new_num2 = num2;

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else if (num1 < num2)
        {
            num2 = num2 - num1;
        }
    }
    cout << num1 << endl;
}