#include <iostream>
using namespace std;

int temp, snp;

void Tampil(int num[], int limit) {
	for(int a = 0; a < limit; a++) {
			cout << num[a] << " ";
		}
}

void BubbleSort(int num[], int limit) {
	for(int i = 0; i < limit; i++) {
	for(int h = 0; h < limit-1; h++) {
		if(num[h] < num[h+1]) {
			temp = num[h];
			num[h] = num[h+1];
			num[h+1] = temp;
			}
		}
	     cout << endl;
		cout << "Proses Sorting " << i+1 << endl;
		Tampil(num, limit);
	}
}

void SelectionSort(int num[], int limit) {
	for(int i=0; i<limit-1; i++){
        snp=i;
        for(int j=i+1; j<limit; j++){
            if(num[j]>num[snp]){
                snp=j;
            }
        }

        if(num[i]<num[snp]){
            temp=num[i];
            num[i]=num[snp];
            num[snp]=temp;
        }
        cout << endl;
        cout << "Iterasi ke " << i+1 << " : ";
        Tampil(num, limit);
    }
}

int main() {
	int limit;
	
	cout << "Masukkan Jumlah Elemen : ";
	cin >> limit;
	
	int num[limit];
	
	cout << endl;
	cout << "Bubble Sort"<<endl;
	for (int i = 0; i < limit; i++) {
		cout << "Masukkan Nilai Elemen ke-" <<i+1<<" ";
		cin >> num[i];
	}
	
	 cout << "Data Sebelum Sorting : ";
	 for (int i = 0; i < limit; i++) {
		cout << num[i] << " ";
	}
	
	BubbleSort(num, limit);
	 cout << endl;
	 cout << endl;
	 cout << "Hasil Akhir Bubble Sort : ";
	Tampil(num, limit);
	
	 cout << endl << endl;
	
	cout << "Selection Sort"<< endl;
	 for (int i = 0; i < limit; i++) {
		cout << "Masukkan Nilai Elemen ke-" <<i+1<<" ";
		cin >> num[i];
	}
	
	cout << "Data Sebelum Sorting : ";
	for (int i = 0; i < limit; i++) {
		cout << num[i] << " ";
	}
	
	SelectionSort(num, limit);
	cout << endl;
	cout << endl;
	cout << "Hasil Akhir Selection Sort : ";
	Tampil(num, limit);

	return 0;
}
