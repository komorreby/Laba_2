//#include <iostream>
//
//using namespace std;
//
//struct MyList
//{
//	MyList* next = NULL;								//��������� �� ��������� �������
//	int field;										//������
//};
//
//void LIFO(MyList* head, int b) {
//
//	int a;
//	for (int i = 0; i < b; i++)
//	{
//		cout << "������� " << i + 1 << " ������� ������: "; cin >> a;     //���� ��������
//
//		MyList* temp = new MyList;				//������� ����� �������
//		temp->field = a;						//���������� ��������� ������� � ���� ������
//		if (head)								//���� ������ �� ����
//			temp->next = head;					//��������� � ������ ������
//		head = temp;							//���������� �������
//		temp = temp->next;						//��������� � ����������
//
//		if (i == b - 1)						//����� ��������� ������
//		{
//			temp = head;						//��������� � ������ ������
//			for (int j = 0; j < b; j++)
//			{
//				cout << temp->field << endl;	//�����
//				temp = temp->next;				//������� � ����������
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
//		cout << "������� " << i + 1 << " �������: "; cin >> a;    //������ ��������� �������� ������
//
//		temp->field = a;						//���������� ������� � ���� ������	
//		temp->next = new MyList;				//������� ����� �������
//		temp = temp->next;						//��������� � ���������� ��������
//
//		if (i == b - 1)						//����� ���������
//		{
//			temp = head;						//��������� � ������ ������
//			for (int j = 0; j < b; j++)
//			{
//				cout << temp->field << endl;	//�����
//				temp = temp->next;				//������� � ����������
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
//	cout << "������� ���-�� ���������: "; cin >> size;	//������ ���-�� ���������
//
//	system("cls");										
//
//	MyList* head = NULL;								//�������� ������ ������
//	head = new MyList;
//
//	system("cls");									
//	while (true) {
//		cout << "1)����\n2)�������\n3)�����\n�����: ";				//����� ����� ��� �������
//		int choice; cin >> choice;							//���� ������										
//
//		system("cls");									
//
//		switch (choice)
//		{
//		case(1):										//����� �����
//		{
//			LIFO(head, size);
//			break;//����� �� �����
//		}
//		case(2):										//����� �������
//		{
//			FIFO(head, size);
//			break;										//����� �� �����
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