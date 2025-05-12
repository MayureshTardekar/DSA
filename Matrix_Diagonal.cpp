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
    cout << "Main diagonal:\n";
    for (int i = 0; i < n; i++)
    {
        // print i tabs/spaces for indentation
        for (int space = 0; space < i; space++)
        {
            cout << "   "; // 3 spaces per level of indent
        }
        cout << arr[i][i] << endl;
    }

    cout << endl;

    // Secondary diagonal
    cout << "Secondary diagonal:\n";
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "   "; // 3 spaces per level
        }
        cout << arr[i][n - i - 1] << endl;
    }

    return 0;
}
