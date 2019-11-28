#include <iostream>
#include <string>

class Books{
    public:
    std::string name;
    double price;
    std::string isbn;
    
    Books(std::string x, double y, std::string z){
        name = x;
        price = y;
        isbn = z;
        
    }
    
};

int main() {
    Books book1("The Gene", 12.59, "123456");
    Books book2("Harry Potter and the Chamber of Secrets", 5.79, "246810");
    
    std::cout << book1.name << " is " << book1.price << " and has isbn: " << book1.isbn << "\n";
    std::cout << book2.name << " is " << book2.price << " and has isbn: " << book2.isbn << "\n";
}
