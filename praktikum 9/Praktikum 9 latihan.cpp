#include <iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value) : data(value), left(NULL), right(NULL) {}
};

int main(){
	int angka [10] = {1,2,3,4,5};	
	
	TreeNode* root = new TreeNode(angka[0]);	
	root->left = new TreeNode(angka[1]);
	root->right =new TreeNode(angka[2]);
	root->left->left = new TreeNode(angka[3]);
	root->right->right = new TreeNode(angka[4]);
	
	cout<<"Nilai Simpul-simpul pohon"<<endl;
	cout<<"Akar"<<root->data<<endl;
	cout<<"Anak kiri dari akaar :"<<root->left->data<<endl;
	cout<<"Anak kanan dari akar :"<<root->right->data<<endl;
	cout<<"Anak kiri dari anak kiri akar :"<<root->left->left->data<<endl;
	cout<<"Anak kanan dari anak kanan akar"<<root->right->right->data<<endl;
	
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;
	
	return 0;
}
