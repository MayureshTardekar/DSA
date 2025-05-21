#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of Elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter Elements to sort: ";
    for (int i = 0; i < n; i++) //
    {
        cin >> arr[i];
    }

    // Bubble sort using swap()
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
