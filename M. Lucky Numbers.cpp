#include <iostream>
using namespace std;
int main()
{
    int num1, num2, counter = -1;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        int lucky = 0, x = i;
        while (x)
        {
            if (x % 10 != 4 && x % 10 != 7)
            {
                lucky++;
            }
            x = x / 10;
        }
        if (lucky == 0)
        {
            cout << i << " ";
            counter++;
        }
    }
    if (counter == -1)
    {
        cout << -1 << endl;
    }
}