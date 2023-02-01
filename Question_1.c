#include <stdio.h>
#include <stdlib.h>

// Integer Variables
int dimX, dimY, squareDim, newDimX, newDimY;

// Function Prototype
int squareMaker(int x, int y);

// Function Name: squareMaker
// Parameters: dimensions of a rectangular shape i.e., x and y
// Output: possible squares of maximum dimensions
int squareMaker(int x, int y){
  if (x < y){
      squareDim = x;
  }
  else{
      squareDim = y;
  }
  
  // New dimensions of the rectangle
  newDimX = abs(x - y);
  newDimY = squareDim;
  
  // Print the squares with dimesions
  printf("%d X %d\n", squareDim, squareDim);
  
  // Exit the code if dimension is less than 1
  if (newDimX == 0){
      exit(0);
  }
  
  // Recursion of function squareMaker that takes input of the new rectangle
  squareMaker(newDimX, newDimY);
  
  return 0;
}

int main(){
  printf("enter the 1st dimension of the rectangle: ");
  scanf("%d", &dimX);
  printf("enter the 2nd dimension of the rectangle: ");
  scanf("%d", &dimY);
  
  // Run the function
  squareMaker(dimX, dimY);
}
