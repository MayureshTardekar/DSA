#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols], trans[cols][rows];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
