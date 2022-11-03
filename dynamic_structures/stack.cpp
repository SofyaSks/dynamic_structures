////LIFO
//// ������� ����� - ����� ������� �����
//class Stack
//{
//	enum { EMPTY = -1, FULL = 10 }; // ������� � ������ ������� �����
//	char st[FULL + 1]; // ������ ��� �������� ������
//	int top; // ����� �������� ���������� �� ������� �����
//public:
//	Stack();
//	void Push(char c); // ��������� � ���� �������
//	char Pop(); // ��������� �� ����� �������
//	void Clear(); // �������� �����
//	bool IsEmpty(); // �������� �� ������� �����
//	bool IsFull(); // �������� �� ��������������� �����
//	int GetCount(); // ������� 
//};
//
//Stack::Stack()
//{
//	top = EMPTY;
//}
//
//void Stack::Clear()
//{
//
//	top = EMPTY;
//}
//bool Stack::IsEmpty()
//{
//
//	return top == EMPTY;
//}
//bool Stack::IsFull()
//{
//
//	return top == FULL;
//}
//int Stack::GetCount()
//{
//
//	return top + 1;
//}
//void Stack::Push(char c)
//{
//
//	if (!IsFull())
//		st[++top] = c;
//}
//char Stack::Pop()
//{
//
//	if (!IsEmpty())
//		return st[top--];
//	else return 0;
//}
//void main()
//{
//	srand(time(0));
//	Stack ST;
//	char c;
//
//	while (!ST.IsFull())
//	{
//		c = rand() % 5 + 2;
//		cout << c << " ";
//		ST.Push(c);
//	}
//	cout << endl;
//	cout << "********************" << endl;
//
//	while (c = ST.Pop())
//	{
//		cout << c << " ";
//	}
//	cout << "\n\n";
//}