#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #6
 * Generate a 4x4 Ordered Matrix
 *
 * This program fills a 4x4 matrix with ordered numbers starting from 1 up to 16.
 *
 * The objective of this challenge is to understand how two-dimensional arrays are constructed in memory and how row-by-row traversal works in matrix-based problems.
 *
 * This algorithm focuses on data construction rather than data analysis, which makes it fundamentally different from previous challenges that processed existing data.
 */

// Fills a 4x4 matrix with sequential ordered numbers
void FillMatrxWithOrderNums(int arr[4][4], short Rows, short Colms)
{
    short Counter = 0;

    // Traverse matrix row by row
    for (short i = 0; i < Rows; i++) // Rows traversal
    {
        for (short j = 0; j < Colms; j++) // Columns traversal
        {
            Counter++;           // Increment counter sequentially
            arr[i][j] = Counter; // Assign ordered value to matrix cell
        }
    }
}

// Prints the matrix in a formatted layout
void PrintMatrix(int arr[4][4], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(2) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[4][4]; // Declare a 4x4 matrix

    FillMatrxWithOrderNums(arr, 4, 4); // Fill matrix with ordered values

    cout << "The following is a 4x4 Ordered Matrix:\n\n";
    PrintMatrix(arr, 4, 4);

    return 0;
}
