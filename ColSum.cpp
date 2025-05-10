#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of Rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter Matrix Elements: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " " << endl;
    }
    for (int j = 0; j < cols; j++)
    {
        int ColSum = 0;
        for (int i = 0; i < rows; i++)
        {
            ColSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " Sum = " << ColSum << endl;
    }
    return 0;
}