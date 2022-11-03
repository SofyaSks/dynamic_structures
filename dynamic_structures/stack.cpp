////LIFO
//// базовый адрес - адрес вершины стека
//class Stack
//{
//	enum { EMPTY = -1, FULL = 10 }; // верхняя и нижняя граница стека
//	char st[FULL + 1]; // массив для хранения данных
//	int top; // будет являться указателем на вершину стека
//public:
//	Stack();
//	void Push(char c); // добавляет в стек элемент
//	char Pop(); // извлекает из стека элемент
//	void Clear(); // очищение стека
//	bool IsEmpty(); // проверка на пустоту стека
//	bool IsFull(); // проверка на переполненность стека
//	int GetCount(); // подсчёт 
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