#include<iostream>
#include<cstring>
#include <conio.h>
#include <windows.h>
using namespace std;

struct kino {
	kino* next;
	kino* prev;
		string name;
		string time;
		int price;
		int people;
};

void addInEnd(kino*& begin, string name, string time, int price, int people) {
	kino* temp = new kino;
	temp->name = name;
	temp->time = time;
	temp->price = price;
	temp->people = people;
	temp->next = NULL;
	temp->prev = NULL;

	if (begin) { // ���� ������ �� ������
		kino* ptr = begin;
		// ���� ����� ������
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp; // ����� ������� � �����
		temp->prev = ptr;
	}
	else // ���� ������ ������
		begin = temp; // ����� ������ �������
}
void output(kino* ptr) {
	cout << "-------------------------------------------------" << endl;
	cout << "|";

	cout.width(19);
	cout << "�����";

	cout << "|";
	cout.width(5);
	cout << "�����";

	cout << "|";
	cout.width(5);
	cout << "����";

	cout << "|";
	cout.width(5);
	cout << "�������";

	cout << "|";

	cout << endl;
	cout << "-------------------------------------------------" << endl;
	while (ptr != NULL) {

		cout << "|";
		cout.width(19);
		cout << ptr->name;

		cout << "|";

		cout.width(10);
		cout << ptr->time;

		cout << "|";

		cout.width(16);
		cout << ptr->price;

		cout << "|";

		cout.width(7);
		cout << ptr->people;
		cout << "|";

		cout << endl;
		cout << "-------------------------------------------------" << endl;
		ptr = ptr->next;
	}
}
void edit(kino*& ptr, string N, string new_name, string new_time, int new_price, int new_people) {
	
	while (ptr != NULL) {
		if (ptr->name == N) { 
			ptr->name = new_name; 
			ptr->time = new_time;
			ptr->price = new_price;
			ptr->people = new_people;
			break;
		}
		ptr = ptr->next;
	}
	cout << "���������� ��������" << endl;
}
void del(kino*& begin, string N) {
	kino* ptr = begin; // ������� �������
	kino* prev = NULL; // ���������� �������
	while (ptr != NULL) {//���� ������� ������
		if (ptr->name == N) { // ������ �������, ������� ����� �������
			if (prev) { // ���� ���������� �������
				kino* temp = ptr;
				prev->next = ptr->next;
			}
			else { // ��� ����������� ��������
				begin = ptr->next;
				delete ptr;
			}
		}
		prev = ptr;//���� � ���������� �������� 
		ptr = ptr->next;
	}
	cout << "����� ������" << endl;
}
void find(kino*& ptr, string N)
{
	kino* next = new kino;
	int k = 0;
	while (ptr != NULL) {
		if (ptr->name == N) {
			k++;
			cout << "movie " << ptr->name << " is found" << endl;
			cout <<"�����:" << ptr->time << "\n" <<"����:" << ptr->price << endl;
			break;
		}
		else
			ptr = ptr->next;
	}
	if (k == 0)
		cout << "this movie not found" << endl;
}

	int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		kino* head = NULL;
		kino* end = head;
		kino* ptr = head;

		string name;
		string time;
		int price;
		int people;

		for (;;) {
			int a;

			cout << "1: �������� ����� ������." "\n"
				"2: �������� ������." "\n"
				"3: ������� ��� ������ � ������� ���������� ��������" "\n"
				"4: ������� ��������� �������." "\n"
				"5: ����� ������" "\n"
				"6: �����." "\n";

			cin >> a;
			system("cls");
			if (a == 1) {
				cout << "������� �������� ������" << endl;
				cin >> name;
				cout << "������� ����� ������" << endl;
				cin >> time;
				cout << "������� ���� �� �����" << endl;
				cin >> price;
				cout << "������� ���������� ��������" << endl;
				cin >> people;
				addInEnd(head, name, time, price, people);
			}

			else if (a == 2) {
				string N;
				
				cout << "������� �������� ������, ������� ����� ��������" << endl;
				cin >> N;
				cout << "������� �������� ������" << endl;
				cin >> name;
				cout << "������� ����� ������" << endl;
				cin >> time;
				cout << "������� ���� �� �����" << endl;
				cin >> price;
				cout << "������� ���������� ��������" << endl;
				cin >> people;
				edit(head, N, name, time, price, people);
			}
			else if (a == 3) {
				output(head);
			}
			else if (a == 4) {
				string N;
				cout << "������� �������� ������, ������� ����� �������" << endl;
				cin >> N;
				del(head, N);
			}
			else if (a == 5) {
				cout << "������� �������� ������, ������� ����� �����" << endl;
				cin >> name;
				find(head,name);
			}
			else if (a == 6) {
				return 0;
			};
		};
	}
	
