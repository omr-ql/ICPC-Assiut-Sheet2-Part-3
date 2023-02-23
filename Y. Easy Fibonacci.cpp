#include <iostream>
using namespace std;
int main()
{
    int num, initial = 0, seconder = 1, sum = 0;
    cin >> num;
    if (num == 1)
    {
        cout << initial;
    }
    else if (num == 2)
    {
        cout << initial << " " << seconder << " ";
    }
    else
    {
        cout << initial << " " << seconder << " ";
        for (int i = 2; i < num; i++)
        {
            sum = initial + seconder;
            cout << sum << " ";
            initial = seconder;
            seconder = sum;
        }
    }
}