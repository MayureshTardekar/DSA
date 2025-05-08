#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter number Elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Sorted Elements Only: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Number You want to Search: ";
    cin >> target;

    int start = 0, end = n - 1;
    bool found = false;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            cout << "Number found at index: " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "Number not found in the Array or Its not Sorted...";
    }
    return 0;
}