#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number you want to search: " << endl;
    cin >> target;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Number Found at Index: " << i << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Number Doesn't exist" << endl;
    }

    return 0;
}