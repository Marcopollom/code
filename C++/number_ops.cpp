#include <iostream>
#include <string>
#include <cmath>


void factor(int x){
    int dummy = x;
    for(int i = 1; i <= dummy; i++){
        if(x % i == 0){
            std::cout << i << " is a factor\n";
        }
    }
}

int isPrime(int y){
    int dumb = std::ceil(sqrt(y));
    for(int idx = 2; idx <= dumb; idx++){
        if(y % idx == 0){
            std::cout << y << " is not prime\n";
            return 0;
        }
    }
    std::cout << y << " is prime\n";
    return 0;
}

int main(){
    isPrime(69);

}
