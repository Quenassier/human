
#include<iostream>
#include <string>

using namespace std;


class persen {
public:
    int vozrast;
    std::string national, name;
    bool pol;

    persen(int vozrast, std::string national, std::string name, bool pol) {
        this->vozrast = vozrast;
        this->national = national;
        this->name = name;
        this->pol = pol;


    }
    void addage(int vozrast) {
        this->vozrast += vozrast;

    }
    void smenapola() {
        this->pol = !pol;
        if (pol == 1)
            cout << "man" << std::endl;
        if (pol == 0)
            cout << "woman" << std::endl;
    }
    void say(persen* people) {
        cout << this->name << " Hi! " << people->name << "\n";
    }
    ~persen() {

        cout << "hello ";
    }

};

int main() {
    persen* herbert = new persen(20, "USA", "herbert", 1);
    persen* anna = new persen(30, "russ", "anna", 0);
    cout << herbert->name << "\n";
    cout << anna->vozrast << "\n";
    anna->addage(30);
    cout << anna->vozrast << "\n";
    herbert->smenapola();
    herbert->say(anna);
    delete(anna);
    cout << anna->name << "\n";
}
