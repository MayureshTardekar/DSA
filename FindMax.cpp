#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of ELements: ";
    cin >> n;
    int arr[n];
    cout << "Enter number of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        cout << "Maximum element: " << max << endl;
        return 0;
    }
}
