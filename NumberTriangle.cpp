#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    cout << "Enter Number of Levels: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " "; // printing columns here
        }
        cout << endl;
    }
    return 0;
}