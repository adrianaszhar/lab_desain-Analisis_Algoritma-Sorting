#include <iostrem>
using namespace std;

	class hewan(){
		private;
			string nama;
			string spesies;
	}
	public;
		void setnama(string n){
			nama=n;
		}
	void set spesies(string s){
		spesies=s;
	}
	string getnama(){
		return nama;
	}
	string getspesies(){
		return spesies;
	}
	int main(){
		hewan hewan;
		hewan.setnama("kucing");
		hewan.setspesies("felistcatus");
		
		cout<<"Nama"<<hewan.getname()<<"\nspesies"<<Hewan.getspesies();
	}
