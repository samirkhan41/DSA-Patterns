#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    // outer most loop
    for (int i = 1; i <= n; i++)
    {
        // for spacing
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }
        // for printing
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }

         
        for(int start = i-1; start>=1; start-- )
        {
            cout<<start;
            
        }
        cout << endl;



    }

    

   
    return 0;
}