#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter elements for Matrix: ";
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
    for (int i = 0; i < rows; i++)
    {
        int RowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            RowSum += arr[i][j];
        }
        cout << "Rows " << i + 1 << " Sum = " << RowSum << endl;
    }

    return 0;
}