#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool IsSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            IsSorted = false;
            break;
        }
    }

    if (IsSorted)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}
