#include <iostream>
using namespace std;

struct barang{
	string nama;
	int harga;
};

int search(const barang daftar[], int n, string brg) {
	for (int i = 0; i < n; i++) {
		if (daftar[i].nama == brg) {
			return i;
		}
	}
	return -1;
}

int main() {
	string brg;
	barang daftar[5]={
		{"buku", 5000},
		{"pensil", 1000},
		{"pulpen", 2000},
		{"penghapus", 500},
		{"penggaris", 1500}
	};
	
	cout << "Masukkan barang yang ingin dicari: ";
	cin >> brg;
	int a = search(daftar, 5, brg);
	if (a != -1) {
		cout << "Barang " << daftar[a].nama << " ditemukan dengan harga " << daftar[a].harga << endl;
	} else {
		cout << "Maaf, barang " << brg << " tidak ditemukan di dalam daftar" << endl;
	}
	return 0;
}

