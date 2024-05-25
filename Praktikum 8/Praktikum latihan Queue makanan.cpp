#include <iostream>
using namespace std;

const int MAX = 5;

class queue{
	private:
		int front, rear, count;
		string arr[MAX];
		
		public:
			queue(){
				front = 0;
				rear = 0;
			}
			
	void enqueue(string x){
		if(count >= MAX){
			cout<<"Sistem pencernaan :"<<endl;
			return;
		}
		
		arr[rear] = x;
		count++;
		rear++;
	    
	}
		string dequeue () {
			if(rear == front){
				string u="Makanan makanan baru.";
				return u;
			}
			string x = arr[front];
			front = (front + 1) %MAX;
			return x;
		}
		
		string peek () {
			if (count <=0) {
				string p="Cerna Makanan.";
				return p;
			}
			return arr[front];
		}
	int size(){
		return count == 0;
	}
	bool isEmpty(){
		return count == 0;
	}
	bool isFull(){
		return count == MAX ;
	}
	void tampil(){
		for(int i=front; i<=rear;i++){
			cout<<arr[i]<<endl;
		}
	}
};

int main () {
	int a;
	string b;

	
	
	queue q;
	
	do{
	cout<<"Sistem pencernaan"<<q.size()<<endl;
	cout<<"1. Makanan makanan baru"<<q.peek()<<endl;
	cout<<"2. Cerna makanan baru"<<q.peek()<<endl;
	cout<<"3. Mengingat makanan apa"<<q.peek()<<endl;
	cout<<"4. Exit sistem"<<q.dequeue()<<endl;
	cout<<"Pilih opsi";
	cin>>a;
	if(a==1){
		cout<<"Makanan baru";
		cin>>b;
		q.enqueue(b);
	}
	if(a==2){
		q.dequeue();
	}
	if(a==3){
		q.tampil();
	}
	}while(a<4);
	
	return 0;
}
