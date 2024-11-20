#include <iostream>
#include <string>
using namespace std;

class Author
{
private:
string name;
string surname;

public:
Author() {};
Author(string name, string surname):name(name),surname(surname){};
string toString(){
    return name + " " + surname;
};
string getName(){
    return name;
};

string getSurname(){
    return surname;
};

void print(){
    cout << name<<" " <<  surname << endl;
};
};