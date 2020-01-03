#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

// Code snippet for implementing values in an array 
  int x = 10, q = 5; 
  int arr[x];
  int y, z;

  for(y = 1; y <= x; y++)
  {
    arr[y] = y;
    cout << setw(5) << arr[y]; 
  }
    cout << endl;

// Code snippet on outputting already declared array values
// index begins at 0
int arr2[5] = {90, 60, 45, 70, 89};

  for(z = 0; z < q; z++)
  {
    cout << setw(5) << arr2[z];
  }

cout << endl;
// Code snippet for implementing a multi-array

int col = 3, row = 3;
int matrix[][4] = {{0,1,2,3}, {0,1,2,3}};

for(int i = 0; i < row; ++i)
  {
    for(int j = 0; j < col; ++j)
    {
      cout << matrix[i][j] << setw(5);
    }
  }
return 0;
}