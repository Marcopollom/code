#include <iostream>
#include <string>
#include <cmath>


class XD{
    public:

    std::string fname;
    std::string lname;
    
    XD(std::string x, std::string y){
    fname = x;
    lname = y;
    }
};

int main() {
    XD rs("rohan","simon");
    std::cout <<"First name: " << rs.fname << " Last name: " << rs.lname << "\n";

}