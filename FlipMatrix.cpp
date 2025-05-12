#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int arr[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Swap row i with row n - i - 1
            int temp = arr[i][j];
            arr[i][j] = arr[n - i - 1][j];
            arr[n - i - 1][j] = temp;
        }
    }

    cout << "\nMatrix after row-wise flip:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
