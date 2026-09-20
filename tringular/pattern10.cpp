#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // outer loop
    for (int i = 1; i <= n; i++)
    {
        int count = i;

        // for spacing
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }
        // for printing

        for (int k = 1; k <= i; k++)
        {

            ++count;
        }
        cout << endl;
    }
    return 0;
}