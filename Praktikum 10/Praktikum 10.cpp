#include <iostream>
#include <vector>

using namespace std;
class graf{
	private:
		int jumlahSimpul;
		vector<vector<int> >matriksketetanggaan;
	public:
		graf(int Simpul){
		
		jumlahSimpul= Simpul;
	
		for (int i=0; i <Simpul; ++i){
			vector <int> baris(Simpul,0);
			matriksketetanggaan.push_back(baris);
		}
}


void tambahSisi(int u,int v){
	if(u>=0 && u<jumlahSimpul && v >=0 && v <jumlahSimpul){
	matriksketetanggaan[u][v]=1;
		matriksketetanggaan[v][u]=1;	
	} else{
	
	cout<<"Sisi tidak valid"<<endl;
 }
}

void hapusSisi(int u, int v){
	if(u>=0 && u <jumlahSimpul && v >= 0 && v < jumlahSimpul){
		matriksketetanggaan[u][v]=0;
		matriksketetanggaan[v][u]=0;
	}else{
		cout<<"Sisi tidak valid";
	}
}

void tampilkan(){
	for(int i = 0; i<jumlahSimpul; i++){
		for(int j = 0; j< jumlahSimpul; j++){
			cout<<matriksketetanggaan[i][j]<<" ";
		}
		cout<<endl;
	}
}
};
int main(){
	int simpul = 5;
	graf g(simpul);
	
	g.tambahSisi(0,1);
	g.tambahSisi(0,4);
	g.tambahSisi(1,2);
	g.tambahSisi(1,3);
	g.tambahSisi(1,4);
	g.tambahSisi(2,3);
	g.tambahSisi(3,4);
	
	cout<<"Matriks ketetanggaan: "<<endl;
	g.tampilkan();
	g.hapusSisi(1,3);
	cout<<"Matriks ketetanggaan setelah menghapus sisi antara 1 dan 3:"<<endl;
	g.tampilkan();
	
	return 0;
}
