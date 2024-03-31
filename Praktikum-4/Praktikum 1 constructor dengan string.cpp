#include <iostream>
#include <string>

using namespace std;
class pelajaran { //Class Name
	public: 	  //Acces specifier
		Pelajaran(){//Constructor
			cout<<"Ini adalah materi c++ tentang Constructors!";
		}
};

int main() {
	pelajaran obj; //membuat object dari sebuah class
	return 0;
}
