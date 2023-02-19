#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x;    // x=element to be find
    cin >> x; // taking input of the element to find
    int arr[n][m];
    for (int i = 0; i < n; i++) // for loop to take input the rows
    {
        for (int j = 0; j < m; j++) // for loop to take input the columns
        {
            cin >> arr[i][j]; // taking the array input
        }
    }
    bool find;
    int locRow;
    int locCol;
    for (int i = 0; i < n; i++) // for loop on the row
    {
        for (int j = 0; j < m; j++) // for loop on the column
        {
            if (arr[i][j] == x) // checking the values of elements matches with the array elements
            {
                locRow = i;  // locRow datatype defined eralier
                locCol = j;  // locCol datatype defined eralier
                find = true; // find datatype defined earlier
            }
        }
    }
    if (find)
    {
        cout << "Element is availabel in the MATRIX!!!"<<"\n";
        cout << "Location of Element is"
             << "\n"
             << locRow << " " << locCol;
    }
    else
    {
        cout << "Element is not availabel in the MATRIX!!!";
    }
}