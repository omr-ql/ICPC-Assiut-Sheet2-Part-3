#include <iostream>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            cout << i << endl;
        }
    }
}