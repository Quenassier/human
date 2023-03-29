
#include<iostream>
#include <string>

using namespace std;


class persen {
public:
  int age;
  std::string national, name;
  bool pol;
  
  persen(int age, std::string national, std::string name, bool pol) {
    this->age = age;
    this->national = national;
    this->name = name;
    this->pol = pol;


  }
  void addage(int age) {
    this->age += age;

   }
  void smenapola() {
    this->pol =! pol;
    if (pol == 1)
    cout<< "man";
    if (pol == 0)
      cout << "woman";
  }
  void say(persen* people) {
    cout << this->name << " Hi! "<<people->name<<"\t";
  }
  ~persen() {
  
    cout << "i delet";
  }

};

int main(){
  persen* herbert = new persen(20, "USA","herbert",1);
  persen* anna = new persen(30, "russ", "anna", 0);
  cout << herbert->name<<"\t";
  cout << anna->vozrast << "\t";
  anna->addvozrast(20);
  cout << anna->vozrast<<"\t";
  herbert->smenapola();
  cout << herbert->pol<<"\t";
  herbert->say(herbert);
  delete(anna);
  cout << anna->name << "\t";
}
