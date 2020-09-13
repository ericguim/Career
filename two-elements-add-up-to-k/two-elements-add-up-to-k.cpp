#include <iostream>

/*

This problem was recently asked by Google. 
Given a list of numbers and a number k, 
return whether any two numbers from the list add up to k. 
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17

Bonus: Can you do this in one pass?

Test ran on linux env:

Parameters order: [size of the array] [array elements sparated by ' '] [k value]

g++ two-elements-add-up-to-k.cpp -o twoelements.o; ./twoelements.o 4 10 15 3 7 17

result:

For the given array and K number, result is: 1

g++ two-elements-add-up-to-k.cpp -o twoelements.o; ./twoelements.o 6 10 15 3 7 8 22 90

result:

For the given array and K number, result is: 0

*/

int main(int argc, char* argv[]){

    int arr_size = atoi(argv[1]);
    int k = atoi(argv[argc-1]);
    bool match = false;


    int arr[arr_size];

    for(int i=2, j=0; i<argc-1; i++){
        arr[j] = atoi(argv[i]);
        j++;
    }

    for(int i=0; i<arr_size; i++){
        int aux=0;

        for (int j=i+1; j<arr_size; j++){
            if ( (arr[i] + arr[j]) == k ){
                match = true;
                break;
            }
        }
        if (match)
            break;
    }

    std::cout << "For the given array and K number, result is: " << match << std::endl;

    return 0;
}