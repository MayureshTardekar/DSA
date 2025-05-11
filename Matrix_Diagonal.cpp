#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int arr[n][n];

    // Input
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " " << endl;
    }

    // Main diagonal
    cout << "Main diagonal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    // Secondary diagonal
    cout << "Secondary diagonal: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][n - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
