/*include <iostream>
using namespace std;
 
class Person {
public:  // access specifier: members below are accessible from outside
    string name; //attribute

    void greet() {  // public accessible function (method)
        cout << "Hello, " << name << endl;
    }
};

int main() {
    Person p;
    p.name = "ALice";
    p.greet();
    return 0;
} 
    