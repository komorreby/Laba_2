//using namespace std;
//#include<iostream>
//#include<windows.h>
//
//struct Tree {
//	Tree* left;
//	Tree* right;
//	int field;
//};
////�������������� 
//
//struct Tree* addnode(int x, Tree*& item) {
//	if (item == NULL)
//	{
//		item = new Tree;
//		item->field = x;
//		item->left = NULL;
//		item->right = NULL;
//	}
//	else if (x < item->field)   //���� ������� x ������ ���������, ������ �����
//		item->left = addnode(x, item->left);
//	else
//		item->right = addnode(x, item->right);
//	return(item);
//}
//
//// ����� ����� ������ (����� � ��������� �����)
//void treeprint(Tree* item)
//{
//	if (item != NULL) {
//		treeprint(item->left);
//		cout << item->field << " " << endl;
//		treeprint(item->right);
//	}
//}
//
//int main() {
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Tree* head = NULL;
//
//	for (;;) {
//		int a;
//		cout << "1. ������" "\n"
//			"2. �����" "\n";
//		cin >> a;
//		if (a == 1) {
//			int N = 0;
//			cout << "����� :" << endl;
//			cin >> N;
//			cout << "----------------" << endl;
//			head = addnode(N, head);
//		}
//		else if (a == 2) {
//			cout << "----------------" << endl;
//			treeprint(head);
//
//		}
//	}
//
//}