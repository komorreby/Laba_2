//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//struct MyList
//{
//	MyList* next = NULL;
//	MyList* prev = NULL;
//	int data;
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int size;
//	int n;
//	int k = 1;
//	int str;
//
//	cout << "Введите кол-во элементов списка: "; cin >> size;
//
//	MyList* head = NULL;
//	head = new MyList;
//	MyList* cur = head;
//
//	system("cls");
//
//	cout << "Введите 1-й элемент списка: "; cin >> str;
//
//	cur->data = str;
//
//	for (int i = 1; i < size; i++)
//	{
//		while (true)
//		{
//			if (cur->next == NULL)
//				break;
//			cur = cur->next;
//			k++;
//		}
//		cout << "Введите " << i + 1 << "-й элемент списка: "; cin >> str;
//		cur->next = new MyList;
//		cur->next->prev = cur;
//		cur = cur->next;
//		cur->data = str;
//
//	}
//
//	system("cls");
//
//	cur = head;
//
//	while (true)
//	{
//		cout << "Сейчас выбран " << k << "-й элемент списка : " << "[" << cur->data << "]" << endl;
//		cout << "1)Выбрать следующий элемент списка \n2)Выбрать предыдущий элемент списка \n3)Выход" << "\nВыбор: "; cin >> n;
//
//		system("cls");
//
//		switch (n)
//		{
//		case(1):
//		{
//			if (cur->next == NULL)
//			{
//
//				cout << "ОШИБКА:Следующего элемента нет";
//				char p = _getch();
//
//				system("cls");
//				continue;
//			}
//			cur = cur->next;
//			k++;
//			break;
//		}
//		case(2):
//		{
//			if (cur->prev == NULL)
//			{
//
//				cout << "ОШИБКА:Предыдущего элемента нет";
//				char p=_getch();
//
//				system("cls");
//				continue;
//			}
//			cur = cur->prev;
//			k--;
//			break;
//		}
//		case(3):
//		{
//			return 0;
//		}
//		system("cls");
//		}
//	}
//}