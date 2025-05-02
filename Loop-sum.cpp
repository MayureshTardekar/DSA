#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        sum += i;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}