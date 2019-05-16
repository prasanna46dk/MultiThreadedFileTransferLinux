#include<stdio.h>
#include<math.h>

void spiralPrint(int arr[][2], int col, int row)
{
  int itr, rowS = 0, rowE = row, colS = 0, colE = col;
  while (rowS < rowE && colS < colE) {
    for (itr = colS; itr < colE; itr++)
      printf("%d ", arr[rowS][itr]);
    rowS++;
    for (itr = rowS; itr < rowE; itr++)
      printf("%d ", arr[itr][colE-1]);
    colE--;
    if (rowS < rowE) {
      for (itr = colE-1; itr >= colS; itr--)
        printf("%d ", arr[rowE-1][itr]);
      rowE--;
    }
    if (colS < colE) {
      for (itr = rowE-1; itr >= rowS; itr--)
        printf("%d ", arr[itr][colS]);
      colS++;
    }
  }
}
int main()
{
  int arr[3][2] = {{1,2},{3,4},{5,6}};
  spiralPrint(arr, 2, 3);
  return 0;
}
