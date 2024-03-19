#include <iostream>
using namespace std;

//void limit
 int main() {
	int limit, snp,temp;
	 cout<<"Masukan jumlah elemen buku ";
	 cin >> limit;
	  int num[limit];
	
	cout << "Masukkan judul buku = ";
	for(int b = 0; b <limit; b++) {
		cin >> num[b];
	}
	cout << "Data belum Sorting = ";
	for(int b = 0; b < limit; b++) {
		cout << num[b] << " ";
	 }
    for(int b=0; b<limit-1; b++){
       snp=b;
        for(int j=b+1; j<limit; j++){
         if(num[j]<num[snp]){
         snp=j;
            }
         }
        if(num[b]>num[snp]){
            temp=num[b];
            num[b]=num[snp];
            num[snp]=temp;
        }
        cout << endl;
         cout << "sorting ke " << b+1 << " = ";
        for (int a = 0; a<6; a++) {
        	cout << num[a] << " ";
		}
     }
    cout << endl;
     cout << "Data Selesai Sorting = ";
    for(int b = 0; b <limit; b++){
    	cout << num[b] << " ";
	}
	return 0;
}
