#include <iostream>

/*

Given an array of integers, calculate the fractions of its 
elements that are positive, negative and zeros. 
Print the decimal value of each fraction on a new line.


Test ran on linux env:
g++ minus-plus.cpp -o minusplus.o; ./minusplus.o -4, 3, -9, 0, 4, 1

result:

from the entered array, 0.5 are positive, 0.333333 are negative and 0.166667 are zeroes

*/

int main(int argc, char* argv[]){
  
  int array_size = argc-1;
  int array[array_size];

  for (int i = 1; i < array_size; i++) {
    array[i] = atoi(argv[i]);
  }

  int positives_count=0, negatives_count=0, zeroes_count=0;

  for (int i = 0; i < array_size; i++)
  {
    if (array[i] == 0)
      zeroes_count++;
    else if (array[i] > 0)
      positives_count++;
    else
      negatives_count++;
  }

  std::cout << "from the entered array, " << (float)positives_count/array_size << " are positive, " << (float)negatives_count/array_size << " are negative and " << (float)zeroes_count/array_size << " are zeroes" << std::endl;

  return 0;
}