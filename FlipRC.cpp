#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter number of rows and colums: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter Matrix Elements: ";
    cin >> arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

}