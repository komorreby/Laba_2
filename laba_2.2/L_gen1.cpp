//#include <iostream>
//
//using namespace std;
//
//struct MyList
//{
//	MyList* next = NULL;								//указатель на следующий элемент
//	int field;										//данные
//};
//
//void LIFO(MyList* head, int b) {
//
//	int a;
//	for (int i = 0; i < b; i++)
//	{
//		cout << "Введите " << i + 1 << " элемент списка: "; cin >> a;     //ввод элемента
//
//		MyList* temp = new MyList;				//создаем новый элемент
//		temp->field = a;						//записываем введенный элемент в поле списка
//		if (head)								//если список не пуст
//			temp->next = head;					//переходим к голове списка
//		head = temp;							//записываем элемент
//		temp = temp->next;						//переходим к следующему
//
//		if (i == b - 1)						//вывод элементов списка
//		{
//			temp = head;						//переходим к голове списка
//			for (int j = 0; j < b; j++)
//			{
//				cout << temp->field << endl;	//вывод
//				temp = temp->next;				//переход к следующему
//			}
//		}
//	}
//}
//void FIFO(MyList* head, int b)
//{
//	int a;
//	MyList* temp = new MyList;
//	temp = head;
//	for (int i = 0; i < b; i++)
//	{
//		cout << "Введите " << i + 1 << " элемент: "; cin >> a;    //вводит остальные элементы списка
//
//		temp->field = a;						//записываем элемент с поле списка	
//		temp->next = new MyList;				//создаем новый элемент
//		temp = temp->next;						//переходим к следующему элементу
//
//		if (i == b - 1)						//вывод элементов
//		{
//			temp = head;						//переходим к голове списка
//			for (int j = 0; j < b; j++)
//			{
//				cout << temp->field << endl;	//вывод
//				temp = temp->next;				//переход к следующему
//			}
//		}
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	int size;											
//
//	cout << "Введите кол-во элементов: "; cin >> size;	//вводим кол-во элементов
//
//	system("cls");										
//
//	MyList* head = NULL;								//обявляем голову списка
//	head = new MyList;
//
//	system("cls");									
//	while (true) {
//		cout << "1)Стек\n2)Очередь\n3)Выход\nВыбор: ";				//выбор стека или очереди
//		int choice; cin >> choice;							//ввод выбора										
//
//		system("cls");									
//
//		switch (choice)
//		{
//		case(1):										//выбор стека
//		{
//			LIFO(head, size);
//			break;//выход из кейса
//		}
//		case(2):										//выбор очереди
//		{
//			FIFO(head, size);
//			break;										//выход из кейса
//		}
//		case(3):
//		{
//			return 0;
//		}
//		}
//	}
//
//	return 0;
//}