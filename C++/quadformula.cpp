#include <iostream>
#include <cmath>

using namespace std;


double a;
double b;
double c;

int Quad_Formula(){
    cout << "Given an equation in the form ax² + bx + c = 0" << endl;
    cout << "Enter value for a" << endl;
    cin >> a;
    cout << "Enter value for b" << endl;
    cin >> b;
    cout << "Enter value for c" << endl;
    cin >> c;
    cout << endl;
    
    double disc = b * b - 4 * a * c;
    if (a == 0){
        if (b == 0){
            cout << "The equation has infinitly many solutions" << endl;
            return 0;
        }else{
            cout << "The equation is a line with solution: " << (-1 * c) / b << endl;
            return 0;
        }
    }
    
    if (disc > 0){
        cout << "The equation has two real solutions" << endl;
        cout << "Solution 1: " << (-1 * b + sqrt(disc)) / (2 * a) << endl;
        cout << "Solution 2: " << (-1 * b - sqrt(disc)) / (2 * a) << endl;
        
        return 0;
    }else if (disc < 0){
        cout << "The equation has two imaginary solutions" << endl;
        cout << "Solution 1: " << (-1 * b) /(2 * a) << " + " << sqrt(abs(disc)) / (2 * a) << "i" << endl;
        cout << "Solution 2: " << (-1 * b) /(2 * a) << " - " << sqrt(abs(disc)) / (2 * a) << "i" << endl;
        
        return 0;
    }else{
        cout << "The equation has one solution" << endl;
        cout << "Solution: " << (-1 * b) / (2 * a) << endl;
        
        return 0;
    }
}

int main(){
    Quad_Formula();
}
