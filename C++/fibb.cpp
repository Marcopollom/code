#include <iostream>
#include <cmath>

// Uses Recurrence relations to calculate the x+1th Fibb Number

int rec_fib( int x ){
    if (x == 0) return 1;
    if (x == 1) return 1;

    return rec_fib(x - 1) + rec_fib(x - 2);
}

// Uses Explicit formula to calculate the nth Fibb Number 

int for_fib( int n ){
    float ans = 1/sqrt(5) * (pow( (1+sqrt(5))/2, n ) - pow( (1-sqrt(5))/2, n ));
    return ans;
}

int main(){
    std::cout << rec_fib(26) << std::endl;
    std::cout << for_fib(27) << std::endl;

}