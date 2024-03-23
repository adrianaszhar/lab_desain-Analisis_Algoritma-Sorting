#include <iostream>//
using namespace std;

	class a{
	private:
		string nama;
		int npm;
		
	
	public:
		void setnama(string z){
			nama=z;
			}
		void setnpm(int m){
			npm=m;
		}
	
		string getnama(){
			return nama;
		}
		int getnpm(){
			return npm;
		}
	
};
		int main(){
			a b;
			string nama;
			int npm;
			
			cout<<"Masukkan nama";
			getline(cin, nama);
			b.setnama(nama);
			cout<<"masukkan npm";
			cin>>npm;
			b.setnpm(npm);
			
			
			cout<<"Nama"<<b.getnama()<<"\nnpm"<<b.getnpm();
			
		}
