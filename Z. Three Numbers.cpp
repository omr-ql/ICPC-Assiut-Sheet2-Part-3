#include <iostream>
using namespace std;
int main()
{
    long long start, end;
    long long counter = 0;
    cin >> start >> end;
    for (int i = 0; i <= start; i++)
    {
        for (int j = 0; j <= start; j++)
        {
            if (end - i - j >= 0 && end - i - j <= start)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
}