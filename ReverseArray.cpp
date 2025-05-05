#include <iostream>
using namespace std;
int main()
{
    int n, arr[8];
    cout << "Enter number of Elements: ";
    cin >> n;
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}